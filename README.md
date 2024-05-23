## Monitoreo de la calidad del agua de un canal en Mixquiahuala
El prototipo de IoT diseñado para la agricultura en la zona de Mixquiahuala, consiste en un sistema de monitoreo para la calidad agua que es usada en el canal1 del Instituto Tecnologico Superior del Occidente del Estado de Hidalgo(ITSOEH).

LoRaWAN, un estándar global para comunicaciones de baja potencia y área amplia, es la
tecnología subyacente utilizada en este sistema. LoRaWAN permite que los datos recopilados
se transmiten a larga distancia con bajo consumo energetico y costos de conectividad
reducidos. Además, esta tecnología es versátil y segura, lo que la convierte en una opción
ideal para aplicaciones agrícolas.

Para abordar esta problemática, se ha diseñado un prototipo integral que busca evaluar y mejorar la calidad del agua en el canal. Los aspectos clave de esta solución son:
 - Monitoreo Estratégico: Sensores inalámbricos recopilan datos en tiempo real sobre parámetros como pH, turbidez y temperatura.
 - Visualización y Análisis: Los datos recopilados se visualizan en gráficos. El historial de datos ayuda a identificar patrones y eventos críticos.

# Problematica 
El problema central radica en el uso de aguas residuales debido a que llega a transmitir enfermedades infecciosas intestinales a traves de cultivos contaminados, especialmente si las aguas contienen nematodos intestinales y bacterias fecales. Estos hechos indican la ausencia de un monitoreo en tiempo real que permita evaluar de manera efectiva la calidad del recurso hídrico utilizado en el cultivo. Esta falta de información precisa y actualizada sobre los niveles de contaminación dificulta la toma de decisiones informadas para proteger la salud de los agricultores y consumidores asi como mitigar los impactos ambientales.

Un ejemplo de esta problemática está ubicado en Mixquiahuala, un municipio del Estado de Hidalgo. Aquí, la utilización de aguas contaminadas provenientes del canal para el riego agrícola resulta en la presencia de sustancias dañinas en los alimentos cultivados, lo cual contraviene las normas establecidas por el Gobierno de México en relación con la calidad y tratamiento de aguas residuales. Estas normativas según la COFEPRIS (s.f) la NOM-179-SSA1-2020 para la calidad del agua destinada al consumo humano, la NOM-001-SEMARNAT-1996 que establece los límites máximos permisibles de contaminantes en las descargas de aguas residuales en aguas y bienes nacionales, y la NOM-003-SEMARNAT-1997 que regula las características y límites máximos permisibles de contaminantes en las aguas residuales tratadas que se reutilizan en servicios al público en general.

Esta falta de cumplimiento de las normativas vigentes hace más visible la necesidad de implementar soluciones tecnológicas avanzadas que permitan identificar y cuantificar con precisión los contaminantes presentes en el agua utilizada para el riego.

Topologia esquematica

### Estructura de Carpetas
  - [ Monitoreo de la calidad del agua de un canal en Mixquiahuala](https://docs.google.com/document/d/1RC6ovkhgoivBChHAbSwbCU58PdewxmAX3b2EdptRmP8/edit)
 - [LoRa MQTT](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_MQTT.rar)
 -  [LoRa TTT](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_TTT.rar)
 -  [Topologia Esquematica](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Topologia%20esquematica%20(1).png)

### Bibliotecas
 - [Heltec.h](https://heltec.org/wifi_kit_install/)
 - [Wifi.h](https://www.arduino.cc/reference/en/libraries/wifi/)
 - [Onewire.h](https://www.arduino.cc/reference/en/libraries/onewire/)
 - [Adafruit_SSD1306.h](https://github.com/vlast3k/Arduino-libraries/blob/master/Adafruit_SSD1306/Adafruit_SSD1306.h)
 - [Adafruit_GFY.h](https://www.arduino.cc/reference/en/libraries/adafruit-gfx-library/)
 - [DallasTemperature.h](https://github.com/vlast3k/Arduino-libraries/blob/master/DallasTemperature/DallasTemperature.h)
 - [MariaDB Connector/C](https://mariadb.org/connector-c/all-releases/)
 
 ### Software

 - [Heltec Lora](https://heltec.org/project/wifi-lora-32-v3/):
WiFi LoRa 32 es una placa de desarrollo IoT clásica diseñada y producida por Heltec Automation. Desde su lanzamiento en 2017. La versión V3 recientemente lanzada tiene la misma secuencia de pines que la versión V2 y conserva Wi-Fi, BLE, LoRa, pantalla OLED y otras funciones. Es la mejor opción para ciudades inteligentes, granjas, hogares, control industrial,seguridad doméstica y desarrolladores de IoT.

 - [Arduino IDE](https://www.arduino.cc/en/software) 
IDE de Arduino nos permite escribir, depurar, editar y grabar nuestro programa (llamados “sketches” en el IDE de Arduino) de una manera sencilla, en gran parte a esto se debe el éxito de Arduino, a su accesibilidad.

 - [Zabbix](https://www.zabbix.com/)
 Una solución de monitoreo distribuido de código abierto y de clase empresarial diseñada para monitorear el rendimiento y la disponibilidad de dispositivos de red, servidores, servicios y otros recursos de TI.

 - [MariaDB](https://mariadb.org/)
 MariaDB Server es una de las bases de datos relacionales de código abierto más populares. Está creado por los desarrolladores originales de MySQL y se garantiza que seguirá siendo de código abierto. Es parte de la mayoría de las ofertas en la nube y el valor predeterminado en la mayoría de las distribuciones de Linux.

- [Raspberry Pi](https://www.raspberrypi.com/)
La tecnología Raspberry Pi, robusta y asequible, se ha implementado en decenas de miles de aplicaciones en una variedad de industrias en todo el mundo.

### Funcionalidades
El sistema se compone de una conexión física entre los sensores y la placa Heltec LoRa a través de cables de cobre. La comunicación entre el transmisor y el Gateway se realiza de manera inalámbrica utilizando el protocolo LoRa.

La comunicación inalámbrica entre el transmisor y el Gateway se realiza utilizando el protocolo LoRa, el cual es un protocolo de comunicación de bajo consumo y largo alcance, diseñado específicamente para aplicaciones de Internet de las Cosas (IoT). LoRa opera en bandas de frecuencia sin licencia, como 868 MHz en Europa y 915 MHz en América, lo que permite una cobertura amplia y una penetración eficiente en entornos urbanos y rurales.

Para transmitir los datos desde el Gateway a Node-RED, se utiliza una conexión inalámbrica por WiFi, empleando el protocolo MQTT Mosquitto. El Gateway, basado en una Raspberry Pi, recibe los datos transmitidos por el transmisor a través de la conexión LoRa. La Raspberry Pi actúa como un nodo central, alojando y procesando los datos LoRa recibidos.

Se inicializan y configuran las librerías, objetos y componentes necesarios para la comunicación LoRa, el control de la pantalla OLED y la gestión de los sensores. La tarjeta LoRa se conecta a través de los puertos 39, 37 y 13, enviando los datos recopilados al Gateway, quien a su vez transmite la información al broker MQTT, asegurando así la correcta comunicación y flujo de datos en el sistema. La comunicación LoRa se realiza mediante un direccionamiento hexadecimal, con el transmisor usando la dirección D2 y el receptor la dirección C1.

Finalmente, se utiliza Zabbix como una plataforma de monitoreo centralizada, altamente configurable y escalable, alojada en otro servidor Raspberry Pi, para la gestión y supervisión del sistema de manera integral, proporcionando una visibilidad global de su estado y rendimiento.

**[LoRa_MQTT](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_MQTT.rar)**

- [Pantalla.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Pantalla.ino):
Contiene el código encargado de controlar y mostrar información en la pantalla. 
Específicamente:
La función pantalla_Mostrar() se encarga de configurar el alineamiento del texto que se mostrará en la pantalla, estableciéndolo a la alineación izquierda. Asi mismo incluye otras operaciones para limpiar, actualizar o configurar la pantalla antes de mostrar contenido.


- [LoRa_MQTT.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_MQTT.ino):
Contiene el código principal de un proyecto que utiliza tecnología LoRa para comunicación inalámbrica y el protocolo MQTT para publicar y suscribirse a mensajes. 
Específicamente:
Incluye las bibliotecas "heltec.h", "WiFi.h" y "PubSubClient.h", que probablemente proporcionan funcionalidades relacionadas con el hardware LoRa, la conexión WiFi y el cliente MQTT, respectivamente. Configuración y manejo de la conexión inalámbrica LoRa,
así como la conexión al broker MQTT y el envío/recepción de mensajes a través de este protocolo. La información truncada en la muestra de código muestra la lógica principal del programa, incluyendo la configuración, el bucle principal y las funciones relacionadas con 
la comunicación LoRa y MQTT.

- [images.h](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/images.h):
Específicamente:
Define constantes para el ancho (logo_width) y alto (logo_height) de la imagen, que en este caso es de 128x53 píxeles. Contiene un array de bytes (logo_bits) que representa la imagen en formato binario. Cada byte representa 8 píxeles de la imagen. Esta imagen probablemente se utiliza en alguna parte del proyecto, ya sea para mostrarla en la pantalla, utilizarla como logotipo. El formato binario de la imagen permite incluirla directamente en el código y acceder a ella de manera eficiente durante la ejecución del programa.

**[LoRa_TTT](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_TTT.rar)**

[Enviar.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Enviar.ino): 
Contiene la función "envia_lora()" que se encarga del envío de paquetes LoRa. La función realiza lo siguiente:

1. Espera a que el módulo LoRa esté listo para enviar un paquete, imprimiendo un mensaje de espera en el serial si está habilitado.
2. Inicia la construcción del paquete LoRa.
3. Escribe los datos en el paquete LoRa:
   - Dirección de destino
   - Dirección del dispositivo que envía
   - ID único del paquete
   - Longitud de los datos
   - Datos del paquete (en formato String)
4. Finaliza y envía el paquete LoRa.

 [LoRa_TTT.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/LoRa_TTT.ino):
 Contiene el código principal del programa. Aquí se encuentran las siguientes secciones:
1. Inclusión de bibliotecas necesarias.
2. Definición de constantes y variables globales:
   - Configuración de la banda de frecuencia LoRa (915 MHz).
   - Definición de las direcciones de los dispositivos local y de destino.
   - Variables para el manejo de los mensajes LoRa recibidos.
   - Indicador para activar/desactivar los mensajes por el puerto serial.
   - Definición de los pines de los sensores.
   - Variables para almacenar las lecturas de los sensores.
   - Variables para controlar el intervalo de tiempo entre lecturas.
   - Variables para almacenar el nivel de señal y la relación señal-ruido LoRa.
3. Función "logo()" que muestra el logotipo en la pantalla OLED.
4. Función "setup()":
   - Inicializa el sensor de temperatura DS18B20.
   - Configura el módulo LoRa con la banda de frecuencia y el factor de propagación.
   - Inicializa la pantalla OLED y muestra el logotipo.
   - Configura los pines de los sensores como entradas.
5. Función "loop()":
   - Verifica si ha transcurrido el tiempo suficiente para enviar un nuevo mensaje.
   - Actualiza el estado simulado de los sensores mediante la función "sensor_revisa()".
   - Construye un mensaje JSON con los datos de los sensores.
   - Llama a la función "envia_lora()" para enviar el mensaje LoRa al dispositivo de destino.
   - Imprime información sobre el mensaje enviado en el monitor serial si está habilitado.
   - Procesa los eventos pendientes utilizando "yield()".
> Note: 
 Cumple con la de función del envío de paquetes LoRa, archivo **"LoRa_TTT.ino"** es el código principal que configura el dispositivo, lee los sensores y envía los datos a través de LoRa.

[Sensore.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Sensore.ino):
   - Este archivo contiene la función `sensor_revisa()`, que se encarga de leer y procesar los datos de los sensores conectados al sistema.
   - La función realiza las siguientes tareas:
     1. Lee el valor del sensor de pH utilizando el pin `sensorPin` y convierte el valor analógico a voltaje.
     2. Aplica una función de calibración `calibrate()` al valor del sensor de pH para obtener un valor calibrado.
     3. Convierte el valor calibrado a una escala de 0 a 14 y lo almacena en la variable `phSensor`.
     4. Lee el valor del sensor de turbidez utilizando el pin `sensorTBD` y convierte el valor analógico a TDS (Total Dissolved Solids) utilizando la función `convertToTDS()`.
     5. Imprime el valor de TDS en el monitor serial y lo almacena en la variable `tdsSensor`.
     6. Lee la temperatura del sensor DS18B20 y la almacena en la variable `tempSensor`.
   - La función `calibrate()` se encarga de realizar operaciones de calibración para el sensor de pH, en este caso, se aplica una calibración lineal.
   - La función `convertToTDS()` se encarga de realizar la conversión del valor analógico del sensor de turbidez a TDS, también utilizando una calibración lineal.

 [recibir.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/recibir.ino):
   - Este archivo contiene la función `recibe_lora()`, que se encarga de procesar los paquetes LoRa recibidos.
   - La función realiza las siguientes tareas:
     1. Verifica si el tamaño del paquete recibido es 0, lo que indica un paquete vacío.
     2. Lee el paquete recibido, incluyendo la dirección del dispositivo que envía, la dirección del dispositivo remitente, el identificador único del paquete y el tamaño esperado del paquete.
     3. Verifica si el tamaño del paquete recibido coincide con el tamaño esperado.
     4. Verifica si el paquete fue destinado a otro dispositivo.
     5. Verifica si el paquete es un mensaje de difusión (broadcast).
     6. Establece el estado del paquete recibido en función de las verificaciones realizadas.

[Pantalla.ino](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Pantalla.ino):
   - Este archivo contiene la función `pantalla_Mostrar()`, que se encarga de mostrar la información en la pantalla OLED del dispositivo.
   - La función realiza las siguientes tareas:
     1. Limpia la pantalla OLED.
     2. Establece la alineación del texto a la izquierda.
     3. Muestra en la pantalla OLED:
        - El número de paquetes LoRa enviados (almacenado en la variable `id_msjLoRa`).
        - El valor del sensor de pH (almacenado en la variable `phSensor`).
        - El valor del sensor de turbidez (almacenado en la variable `tdsSensor`).
        - La temperatura (almacenada en la variable `tempSensor`).
        - La intensidad de la señal RSSI de LoRa (almacenada en la variable `rssi_lora`).
   - La función utiliza la biblioteca Heltec para interactuar con la pantalla OLED del dispositivo.

 *Recopila los datos de los sensores, procesa los paquetes LoRa recibidos y muestra la información en una pantalla OLED.*

### Instrucciones de Instalación
- Instalación Raspberry Pi junto con LoRaWan
> Nota al final de cada paso se abjunta las fotos de cada paso en cuestión.

Paso 1: Instala El Sistema Operativo a La Raspberry Pi
Instala El Sistema Operativo en La Raspberry Pi
Primero debes instalar el sistema operativo Raspberry Pi Os en tu micro SD siguiendo los pasos indicados en la página oficial de Raspberry Pi .
[Paso 1](https://content.instructables.com/F5V/QUPS/KWGECWZR/F5VQUPSKWGECWZR.png?auto=webp&frame=1&fit=bounds&md=9e5bd6c4dbb37d500e7fb06274364731)

Paso 2: Cierre De Jumpers (Opcional)
Cierre De Jerséis (Opcional)
En el caso de que necesites utilizar un 3GBee de Telit debes cerrar el jumper W4 del módulo 3G y el jumper W1 de la Gateway Hat.
[Paso 2](https://content.instructables.com/FH3/YB0K/L15D619Q/FH3YB0KL15D619Q.png?auto=webp&frame=1&width=763&fit=bounds&md=e20e17f7f80e8a029111fb9e06f5d920)

Paso 3: Armar El Portal
Armar El Portal
Armar El Portal
Antes de encender la Raspberry Pi, conecta el GateWay Hat a la Raspberry Pi, coloca el 3GBee en el Socket 2 y el LoRaBee en el Socket 1, luego conecta el transformador de 12VDC al conector de barril de la Gateway Hat y energiza la Raspberry Pi. con el transformador original de la misma.
[Paso 3](https://content.instructables.com/FWI/PBN1/KX4OU9PA/FWIPBN1KX4OU9PA.png?auto=webp&frame=1&width=600&height=1024&fit=bounds&md=5cca69db7c63d76ac1110f4749fbad39)

Paso 4: Habilita La Puerta UART De La Raspberry Pi
Habilita La Puerta UART De La Raspberry Pi
Habilita La Puerta UART De La Raspberry Pi
Habilita La Puerta UART De La Raspberry Pi2 más imágenes
Ya que la Raspberry Pi se comunicará por UART con los módulos LoRaBee y 3GBee, debes habilitar la puerta serial del equipo, ya que viene deshabilitado por defecto. Sigue los siguientes pasos para habilitarla desde el terminal.

Ejecute el terminal de Linux.
Escribe el comando " sudo raspi-config ".
Selecciona "Opciones de interfaz".
Selecciona "No" a la primera pregunta.
Seleccione "Sí" a la segunda pregunta.
Presiona "Ok".
Seleccione "Terminar".
Reinicia tu Raspberry Pi con el comando " sudo reboot ".
[Paso 4-1](https://content.instructables.com/FWP/3GI3/KWGED3KN/FWP3GI3KWGED3KN.png?auto=webp&frame=1&crop=3:2&fit=bounds&md=08cb9455996732de769c9c367436a6ef)
[Paso 4-2](https://content.instructables.com/FEQ/LNUQ/KWGED3KO/FEQLNUQKWGED3KO.png?auto=webp&frame=1&fit=bounds&md=7bf51a935891176a643c9773dd3425a2)
[Paso 4-3](https://content.instructables.com/F8G/GSER/KWGED3KP/F8GGSERKWGED3KP.png?auto=webp&frame=1&fit=bounds&md=ce5cde56967beb5d05f6d88c3be6c32a)
[Paso 4-4](https://content.instructables.com/F9R/TG54/KWGED3KQ/F9RTG54KWGED3KQ.png?auto=webp&frame=1&fit=bounds&md=e03d8a757314d329c10ebd6465755f93)
[Paso 4-5](https://content.instructables.com/FSJ/1I5J/KWGED3KR/FSJ1I5JKWGED3KR.png?auto=webp&frame=1&fit=bounds&md=e03d8a757314d329c10ebd6465755f93)

Paso 5: Edita El Archivo Gateway.py
Edita El Archivo Gateway.py
Abra el archivo gateway.py con su editor de código preferido y modifique el APIKEY, colóquelo correspondientemente a su dispositivo en Ubidots.
[Paso 5](https://content.instructables.com/FNF/BC97/KWGED6HQ/FNFBC97KWGED6HQ.png?auto=webp&frame=1&fit=bounds&md=389d682405a9cb78691ebf8de6bd5ac8)

Paso 6: Copia El Archivo Gateway.py
Copia El Archivo Gateway.py
Copia el archivo "gateway.py" a la caperta home de tu Raspberry Pi, este script se encargará de recibir los datos del módulo LoRaBee y enviarlos a tu servidor a través del módulo 3GBee.
[Paso 6](https://content.instructables.com/FIR/VMTL/KWGED405/FIRVMTLKWGED405.png?auto=webp&frame=1&fit=bounds&md=7dc2604239d4a76888ac3aa456a9ebb2)

Paso 7: Ejecuta El Script En El Gateway
Ejecuta El Script En El Gateway
Desde la terminal de tu Raspberry Pi ejecuta el siguiente comando:
```
puerta de enlace python3.py
```
Esto ejecutará el script, el cual coloca el LoRaBee en modo de escucha, esperando por mensajes entrantes desde otro LoRaBee.
[Paso 7](https://content.instructables.com/FI7/OJF5/KX64A05H/FI7OJF5KX64A05H.png?auto=webp&frame=1&width=727&fit=bounds&md=762aa2fa91b6e60d58ef4878ce3a5043)

Paso 8: Programa La Pícaro+
Programa La Pícaro+
Programa La Pícaro+
Conecta el LoRaBee en el socket XBee de tu Picaro+ y carga el programa "picaro_lora.ino".
[Paso 8-1](https://content.instructables.com/FRV/P9TH/KX649M80/FRVP9THKX649M80.png?auto=webp&frame=1&width=1024&height=1024&fit=bounds&md=073513aef373b3df918d949882771165)
[Paso 8-2](https://content.instructables.com/F0C/TXKQ/KX649M8P/F0CTXKQKX649M8P.png?auto=webp&frame=1&height=1024&fit=bounds&md=1ffb8a997e4f300a8376a7d118a0ae7e)

Paso 9: Monitorea Los Datos Enviados
Monitorea Los Datos Enviados
Monitorea Los Datos Enviados
Una vez cargado el programa en la tarjeta Picaro+ abre el monitor serial del IDE de Arduino, y podrás ver los datos que esta enviando el Nodo LoRa, puedes cambiar el periodo de transmisión en el código para realizar pruebas más rápidas.
[Paso 9-1](https://content.instructables.com/F46/UXT3/KX649NHG/F46UXT3KX649NHG.png?auto=webp&frame=1&width=600&height=1024&fit=bounds&md=0cfd8039ad2807766a5202091ce8e826)
[Paso 9-2](https://content.instructables.com/FGX/Q5AT/KX649NHH/FGXQ5ATKX649NHH.png?auto=webp&frame=1&width=1024&height=1024&fit=bounds&md=9c55dd2b00b3bb93c1c2c35e2a4d18f8)


Paso 10: Monitorea Los Datos Recibidos
Monitorea Los Datos Recibidos
En la consola de tu Raspberry Pi verás un mensaje con el dato que te envío el Picaro+ y la transmisión del mismo hacia tu servidor, así puedes validar que esta funcionando tu gateway LoRa a 3G con Raspberry Pi y Picaro+.
[Paso 10](https://content.instructables.com/FDJ/EYRJ/KX64A04S/FDJEYRJKX64A04S.png?auto=webp&frame=1&width=725&fit=bounds&md=5bfb2db1aa599513c15aa4ad5fd61ed1)

Paso 11: Mejora El Proyecto
Ya estableciste una comunicación directa entre 2 módulos LoRa y tu servidor, ahora puedes manipular los datos, agrupar varias tramas o agregar más sensores a tu nodo para ampliar las capacidades de tu sistema IoT.

- Para el funcionamiento del monitoreo en tiempo real usamos, [Zabbix](https://www.zabbix.com/download?zabbix=6.4&os_distribution=ubuntu&os_version=24.04&components=server_frontend_agent&db=mysql&ws=apache) usando una maquina virtual Ubuntu donde se realizara su debida instalación usando como servidor [Zabbix servidor Raspberry Pi](https://www.zabbix.com/download?os_distribution=raspberry_pi_os).

A continuación pasos a seguir para instalar zabbix servidor Raspberry Pi teniendo inicialmente instalado Zabbix.

**A. Instalar el repositorio Zabbix**
Documentación
```
# wget https://repo.zabbix.com/zabbix/6.4/raspbian/pool/main/z/zabbix-release/zabbix-release_6.4-1+debian11_all.deb
# dpkg -i zabbix-release_6.4-1+debian11_all.deb
# apt update
```
**B. Instalar el servidor, frontend y agente de Zabbix**
```
# apt install zabbix-server-mysql zabbix-frontend-php zabbix-apache-conf zabbix-sql-scripts zabbix-agent
```

**C. Crear base de datos inicial**
Asegúrese de tener el servidor de base de datos en funcionamiento.
Ejecute lo siguiente en el host de su base de datos.
```
# mysql -uroot -p
password
mysql> create database zabbix character set utf8mb4 collate utf8mb4_bin;
mysql> create user zabbix@localhost identified by 'password';
mysql> grant all privileges on zabbix.* to zabbix@localhost;
mysql> set global log_bin_trust_function_creators = 1;
mysql> quit;
```
En el servidor Zabbix, importe el esquema y los datos iniciales. Se le pedirá que ingrese su contraseña recién creada.
```
# zcat /usr/share/zabbix-sql-scripts/mysql/server.sql.gz | mysql --default-character-set=utf8mb4 -uzabbix -p zabbix
```

Deshabilite la opción log_bin_trust_function_creators después de importar el esquema de la base de datos.
```
# mysql -uroot -p
password
mysql> set global log_bin_trust_function_creators = 0;
mysql> quit;
```

**D. Configurar la base de datos para el servidor Zabbix**
Editar archivo /etc/zabbix/zabbix_server.conf
```
DBPassword=password
```
Inicie los procesos del agente y del servidor Zabbix y haga que se inicie al iniciar el sistema.
```
# systemctl restart zabbix-server zabbix-agent apache2
# systemctl enable zabbix-server zabbix-agent apache2
```
**F. Abra la página web de la interfaz de usuario de Zabbix**
La URL predeterminada para la interfaz de usuario de Zabbix cuando se utiliza el servidor web Apache es http://host/zabbix

**Empieza a usar Zabbix**

### Hardware
Para este proyecto se usaron los sensores:

- Sensor de pH: Un pH inadecuado puede afectar negativamente la absorción de nutrientes esenciales y provocar deficiencias o toxicidades. Por lo tanto, un sensor de pH permite medir y controlar de manera precisa el nivel de acidez o alcalinidad del agua de riego.
- Sensor de turbidez:  La presencia de partículas sólidas puede indicar la presencia de sedimentos, microorganismos y otros contaminantes que pueden afectar la calidad del agua y la salud de las plantas. Un sensor de turbidez permite detectar y cuantificar estas partículas.
- Sensor de temperatura:  Las temperaturas demasiado altas o bajas pueden tener efectos negativos en la absorción de nutrientes y en los procesos metabólicos de las plantas. Un sensor de temperatura permite monitorear la temperatura del agua de riego.

Asi mismo se usaron  placas: 
-  La placa Heltec LoRa v2 se utiliza como transmisor inalámbrico que recopila datos de sensores y los envía al Gateway Raspberry Pi a través de conexión LoRa
-   Raspberry Pi funciona como Gateway LoRa, recibiendo los datos y transmitiéndolos a Node-RED a través de WiFi/MQTT, además de alojar la plataforma de monitoreo Zabbix.

### Esquematicos ###
Los esquemáticos y diagramas de conexión de los componentes de hardware utilizados en el proyecto se presentan de tres formas, una donde nos indica la topología de red, la segunda el esquemático y por último el circuito donde muestra las conexiones finales de los dos anteriores. 

Topología de red implementada:
1. Recolección de datos:
Los sensores recopilan datos de temperatura, humedad del suelo y pH.

2. Transmisión LoRa:
El primer nodo LoRa transmite estos datos inalámbricamente al receptor LoRa.

3. Envío a Internet:
El receptor LoRa envía los datos al módem, que los transmite al gateway y luego a Internet para tomar acciones conforme lo requiera el proyecto.

4. Procesamiento y almacenamiento:
El Raspberry Pi recibe los datos, los procesa y los almacena para su análisis posterior

Diagrama de Topologia :  [Topologia Esquematica](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/Topologia%20esquematica%20(1).png)

Esquemático del circuito:
1. Batería de 3.7V, 1200mA:
Fuente de alimentación del sistema.
2. ESP32 LoRa V2 Heltec:
Microcontrolador principal con capacidad de comunicación LoRa.
3. DS18B20 (Sensor de Temperatura):
VCC conectado a la fuente de alimentación de 3.3V.
GND conectado a tierra.
DATA conectado al pin digital 13 del ESP32 con una resistencia pull-up de 5.1kΩ entre DATA y VCC.
4. Sensor de pH:
VCC conectado a la fuente de alimentación de 3.3V.
GND conectado a tierra.
Señal de salida conectada al pin 37 del ESP32.
5. Sensor de Turbidez:
VCC conectado a la fuente de alimentación de 3.3V.
GND conectado a tierra.
Señal de salida conectada al pin 39 del ESP32.

Diagrama del Circuito [DiagramaCone](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/DiagramaCone.png)

Esquemático junto a topología :
A continuación, se presenta el esquemático del circuito, que detalla las conexiones mencionadas anteriormente junto a las conexiones inalámbricas. Este esquema proporciona una vista clara de cómo cada componente está conectado al microcontrolador ESP32 y como funciona dentro de la topología junto al Gateway.

> Nota: Ver las conexios del diagrama anterior

### Configuración ###
Para configurar la Raspberry Pi como un gateway de IoT, primero se instaló un sistema operativo Ubuntu Core. Luego, se configuró la conectividad de red, conectando el modem a la Raspberry Pi a de manera inalámbrica, y configurar las interfaces inalámbricas como WiFi y LoRa para comunicarse con los demás módulos. A continuación, se instaló y configuró la plataforma de gestión de IoT, integrando los protocolos de comunicación necesarios. 

Conectando los sensores y dispositivos IoT a la Raspberry Pi, de forma inalámbrica y programando la lógica de automatización y control utilizando herramientas de programación para el funcionamiento de los sensores ya que tienen que tener la programación adecuada para la recolección de datos(Ver código Lora_MQTT y Lora_TTT). 

Por último, el almacenamiento junto al análisis de datos conectando unidades de almacenamiento externas y herramientas de análisis de datos en este caso como lo fue Zabbix. Para explicar la configuración del entorno de Zabbix se sugiere ir a su documentación final ya que depende del equipo que se esté usando así como las necesidades particulares de cada quien desde la forma de instalación hasta lo que quiera realizar dentro de la plataforma.


### Cableada ###
El cableado utilizado en esta configuración es de tipo genérico, utilizando cables con conectores hembra-hembra o macho-hembra, que permiten interconectar los diversos módulos y sensores de una manera flexible.
Los principales dispositivos de red presentes son:
- Sensor de pH
- Sensor de turbidez
- Sensor de temperatura DS18b20
Estos dispositivos se conectan de manera cableada al módulo ESP32 LoRa V2, que actúa como el controlador central del sistema. Se incluye una batería de 3.7 voltios y 1200mA proporciona la alimentación principal a todo el sistema, incluyendo el módulo ESP32 LoRa V2 y los sensores conectados de manera cableada.
La topología de la red cableada se puede considerar de tipo estrella, donde el módulo Raspberry Pi  es el nodo central al que se conectan los diferentes sensores y dispositivos periféricos.
Las conexiones cableadas emplean interfaces digitales comunes, como:
- Inalámbrica
- Bus de datos paralelo (GPIO)
- Protocolo I2C
- Protocolo SPI
Estos permiten la transmisión de datos y control entre el controlador ESP32 y los sensores conectados así como al Gateway y modem.

### Inalámbrica ###
El sistema utiliza tecnología LoRaWAN para la comunicación inalámbrica. LoRaWAN es un estándar global para comunicaciones de baja potencia y área amplia, que permite la transmisión de datos a larga distancia con bajo consumo de energía y costos de conectividad reducidos.

La tecnología LoRaWAN se basa en el estándar IEEE 802.22 y opera en las frecuencias de 433 MHz, 868 MHz y 915 MHz, dependiendo de la región geográfica. Esta tecnología es versátil y segura, lo que la hace ideal para aplicaciones en el sector agrícola.

Gracias a LoRaWAN, los datos recopilados por los sensores del sistema (pH, turbidez y temperatura) se pueden transmitir a larga distancia de manera eficiente y confiable. Además, la interoperabilidad de LoRaWAN permite integrar fácilmente los datos transmitidos por este sistema con otras plataformas de control y monitoreo, ampliando así las posibilidades de aplicación en diversos sectores.

En resumen, el uso de la tecnología LoRaWAN en este sistema de monitoreo agrícola proporciona una solución escalable, de bajo costo y de bajo consumo de energía, que puede adaptarse a una amplia variedad de entornos y necesidades en el sector agrícola.

### Escenarios de Uso ###
Conforme la evidencia fotográfica del proyecto. Se puede mencionar lo siguiente:

Con los sensores de pH y turbidez conectados al sistema, se implementa para monitorear y registrar periódicamente las características fisicoquímicas del agua en el canal1. Esto permitiría recopilar datos históricos sobre la evolución de estos parámetros a lo largo del tiempo.
El sensor de temperatura DS18b20 integrado en el sistema posibilitará el monitoreo de la temperatura del agua. Estos datos de temperatura podrían ser registrados y analizados para detectar patrones o cambios a lo largo del tiempo.
El módulo ESP32 LoRa V2, dentro del sistema podría transmitir de manera inalámbrica los datos recopilados por los sensores a una estación base o a un sistema de monitoreo remoto. Esto permitiría el seguimiento y análisis de la información en tiempo real o a través de una base de datos histórica.
Los datos recopilados por el sistema podrían ser procesados y presentados en informes, gráficos o dashboards que permitan al usuario final visualizar la evolución de los parámetros monitoreados, del  pH,  turbidez y  temperatura. Esto facilita el análisis y la toma de decisiones en función de los datos históricos.

(Ver evidencia 01-03)
- [Evidencia de Implementación 01](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/EvidenciaImple01.jpeg)
- [Evidencia de Implementación 02](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/EvidenciaImple02.jpeg)
- [Evidencia de Implementación 03](https://github.com/AquaJe/Monitoreo-de-la-calidad-del-agua-de-un-canal-en-Mixquiahuala.-/blob/main/EvidenciaImple03.jpeg)


### Casos de Uso (para Usuario Final, Administrador o Proveedor del Servicio) ###  
1. Monitoreo de Calidad del Agua:
El usuario final accede a la plataforma y/o interfaz de visualización de datos.
Puede ver los valores actuales y el historial de los parámetros de pH, turbidez y temperatura del agua.
2. Consulta de Datos Históricos:
El usuario final puede acceder a la base de datos del sistema para consultar los registros históricos de los parámetros de calidad del agua.
Utiliza estas métricas para analizar tendencias y patrones en la calidad del agua a lo largo del tiempo para ayudar su toma de decisiones.

### Limitaciones y Mejoras Futuras ###
Como es un prototipo un área de mejora es la calidad de los sensores ya que presenta fallas el sensor de temperatura al sumergirlo al agua por el case se filtra el agua en cantidades pequeñas. Por lo cual se sugiere utilizar sensores de temperatura más robustos y con mayor grado de impermeabilidad, diseñados específicamente para aplicaciones de monitoreo de agua y la posibilidad de encapsular o proteger adecuadamente los sensores para evitar la filtración de agua y mejorar la durabilidad del sistema.
Dentro del sistema podría ser programado para detectar eventos específicos, como valores de pH, turbidez o temperatura fuera de rangos establecidos, y generar alertas o notificaciones para informar al usuario sobre posibles anomalías o cambios significativos en las condiciones del agua. 
Por último la posibilidad de incorporar sensores adicionales, como los de oxígeno disuelto, conductividad eléctrica, o incluso la detección de contaminantes específicos y ampliar las capacidades de análisis de datos, permitiendo al usuario generar informes más detallados, visualizaciones gráficas avanzadas y predicciones basadas en los patrones históricos así como la generación de reportes.

### Contribuciones ###
Algunas formas de contribuir al proyecto es al reportar problemas, de tal manera que se proporcionen detalles como: pasos para reproducir, comportamiento esperado, comportamiento actual, versión del software, etc; e indicar a quién deben dirigirse para reportar problemas.

Para las solicitudes de extracción:
Si ha desarrollado una nueva característica, solucionado un problema o realizado mejoras en el código, puede enviar una solicitud de extracción para que sea revisada e incorporada al proyecto.
Antes de enviar la solicitud, asegúrese de que su código cumpla con los estándares de codificación y las pautas del proyecto.
Proporciona una descripción detallada de los cambios realizados, los problemas abordados y las mejoras implementadas.

Si está interesado en participar en el proyecto:
Primero probar el sistema y proporcionar comentarios
Describe detalladamente tu propuesta y explica cómo crees que podría beneficiar al proyecto.
Comparte tus ideas, realiza preguntas y brinda retroalimentación
Familiarízate con las pautas de contribución del proyecto y asegúrate de seguir los estándares de codificación y de documentación establecidos.


## License
  [Zabbix 6.4 ](https://www.zabbix.com/download?zabbix=6.4)
  [Arduino IDE 2.2.1](https://www.npackd.org/p/arduino-ide64/2.2.1)
  [Maria DB](https://mariadb.com/kb/en/mariadb-10-11-0-release-notes/)
  

   

