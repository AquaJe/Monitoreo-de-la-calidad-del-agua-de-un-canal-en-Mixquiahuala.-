// Incluir bibliotecas
#include <heltec.h>
//#include <ArduinoJson.hpp>
//#include <ArduinoJson.h>
#include <OneWire.h>
#include <DallasTemperature.h>
//#include <LoRa.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "images.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

// configuracion LoRa Banda ISM en Región 915Mhz
#define BAND 915E6       // 433E6,868E6,915E6
byte spread_factor = 8;  // rango 6-12,default 7

// Mensaje LoRa a enviar por direcciones//////////////////
byte dir_local = 0xD2;    // Dispositivo 1 dirección local del dispositivo
byte dir_destino = 0xC2;  // Dispositivo 2 dirección local del dispositivo
byte id_msjLoRa = 0;      // ID del mensaje (contador)

// Mensaje LoRa recibido////////////////////////////////
  byte dir_envio  = 0xc1; // receptor
  byte dir_remite = 0xd0; // emisor
  String paqueteRcb = ""; // mensaje LoRa
  byte   paqRcb_ID  = 0;
  byte   paqRcb_Estado = 0;
  // 0:vacio, 1: nuevo, 2:incompleto
  // 3:otro destinatario, 4:Broadcast*/

// variables para mensajes por Puerto Serial activa///////
volatile boolean serial_msj = true;  // Indicador para activar los mensajes por el puerto serial

// SENSORES
const int sensorPin = 37;
const int sensorTemp = 13;  
const int sensorTBD = 39; //Pin de temperatura grados celcius

// Instancia las clases
OneWire oneWireObjeto(sensorTemp);
DallasTemperature sensorDS18B20(&oneWireObjeto);  //Se declara una variable u objeto para el sensor

// Variables ara almacenar la lectura
# define BattPIN 36
String battNivel;
String phSensor;
String tdsSensor;
String tempSensor;

// tiempo entre lecturas
long tiempo_antes = 0;         // Tiempo antes de la última lectura
long tiempo_intervalo = 5000;  // Intervalo de tiempo entre lecturas
//long tiempo_espera = tiempo_intervalo + random(2000);

int rssi_lora = 0;  // nivel de señal LoRa
int snr_lora = 0;   // Relación señal-ruido LoRa

void logo(){
	Heltec.display -> clear();
	Heltec.display -> drawXbm(0,5,logo_width,logo_height,(const unsigned char *)logo_bits);
	Heltec.display -> display();
}

void setup() {

  sensorDS18B20.begin();  //Inicia el sensor

  // Inicializar la comunicación LoRa y configurar la banda y el factor de propagación
  Heltec.begin(true /*DisplayEnable Enable*/,
               true /*Heltec.Heltec.Heltec.LoRa Disable*/,
               true /*Serial Enable*/,
               true /*PABOOST  Enable*/, 
               BAND /*long BAND*/);
  LoRa.setSpreadingFactor(spread_factor);
  
  //LoRa.onReceive(cbk);
  LoRa.receive();

  Heltec.display->init(); 
  logo();
  delay(1000);

  Heltec.display -> clear();
  Heltec.display -> drawString(0, 0, "conexion con pantalla OK");
  Heltec.display ->drawString(0, 20, "direccion local: " + String(dir_local, HEX));
  Heltec.display ->drawString(0, 30, "Estableciendo pines");
  Heltec.display -> display();
  Heltec.display -> clear();

  //Serial.print("Sensores activos");

  //Inicializa los pines de los sensores
  pinMode(sensorPin, INPUT);
  pinMode(sensorTemp, INPUT);
  //pinMode(senGasLP,INPUT);
  pinMode(sensorTBD, INPUT);
  /*/inicializa sensor BATERIA
  pinMode(BattPIN, INPUT);*/
  delay(1000);

  // display 
}

void loop() {

  /*int rssi_lora = 0;  // nivel de señal LoRa
  int snr_lora = 0;   // Relación señal-ruido LoRa*/

  ////////////////////////////////////////// Enviar mensajes entre intervalos/////////////////////////////////////////////////////////////

  // Verificar si es el momento de enviar un mensaje
  long tiempo_ahora = millis();
  long t_transcurrido = tiempo_ahora - tiempo_antes;


  if (t_transcurrido >= tiempo_intervalo) {

    // Actualizar el estado simulado del sensor
    sensor_revisa();
    // construccion y guaradado de valores en mensaje JSON
    String paqueteEnv = "{\"PH\":" + phSensor + //(Ph)
                        ",\"Turbidez\":"+ tdsSensor + //(ppm)
                        ",\"Temperatura\":" + tempSensor + // (ppm)
                        "}";  
    /*paqueteEnv = paqueteEnv + "PL:" + Gas_LP;
    paqueteEnv = paqueteEnv + "ppm|";*/

    // Enviar mensaje LoRa al dispositivo de destino
    envia_lora(dir_destino, dir_local, id_msjLoRa, paqueteEnv);
    id_msjLoRa = id_msjLoRa + 1;

    yield(); // Procesa eventos pendientes
    
    // Imprimir mensaje a serial monitor
    if (serial_msj == true) {
      Serial.print("Enviado:  ");
      Serial.print(String(dir_destino, HEX));
      Serial.print(",");
      Serial.print(String(dir_local, HEX));
      Serial.print(",");
      Serial.print(id_msjLoRa - 1);
      Serial.print(",");
      Serial.println(paqueteEnv);
      /*Serial.print(" ,");
      Serial.print(rssi_lora);
      Serial.print(",");
      Serial.println(snr_lora);*/
    }
    //Mostrar dato en pantalla
        pantalla_Mostrar();
        //Serial.print(rssi_lora);
        //Heltec.display ->drawString(0, 50, "RSSI" + String(rssi_lora));//Heltec.display ->drawString(0, 60, "señal-ruido" + String(snr_lora));
        Heltec.display -> display();
    // Actualizar el tiempo para el próximo envío y generar un nuevo tiempo de espera
    tiempo_antes = millis();
    tiempo_intervalo = 3000 + random(2000);

    // LED parpadea. Indicador de envio LoRa
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }

  //////////////////////////////////////////////// Revisar mensajes LoRa entrantes////////////////////////////////////////
  int msjRcbLoRa = LoRa.parsePacket();
  if (msjRcbLoRa !=0){
      // Procesar y recibir mensajes LoRa
    recibe_lora(msjRcbLoRa);
    rssi_lora = LoRa.packetRssi();
    snr_lora  = LoRa.packetSnr();
    
     // Imprimir información en el monitor serial (si está habilitado)
    if (serial_msj == true){
      if (paqRcb_Estado == 1){
        Serial.print("Recibido: ");
        Serial.print(String(dir_remite,HEX)); 
        Serial.print(",");
        Serial.print(String(dir_envio,HEX));
        Serial.print(",");
        Serial.print(paqRcb_ID);  
        Serial.print(",");
        Serial.print(paqueteRcb); 
        Serial.print(",");
        Serial.print(rssi_lora);
        Serial.print(",");
        Serial.print(snr_lora);
        Serial.print(",");
        Serial.println();

        //Heltec.display ->drawString(0, 50, "RSSI: " + String(rssi_lora)+ " dBm");
        //Heltec.display ->drawString(0, 60, "señal-ruido" + String(snr_lora));
        //Heltec.display -> display();

      }else{
        Serial.print("Paquete recibido Estado: ");
        Serial.println(paqRcb_Estado);
      }
    }
     yield(); // procesa wifi
    // LED parpadea Rebibido Lora
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(LED, LOW ); 
    delay(50);
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(LED, LOW );
  }

  delay(100);
  yield(); // procesa wifi
  Heltec.display->clear();
}