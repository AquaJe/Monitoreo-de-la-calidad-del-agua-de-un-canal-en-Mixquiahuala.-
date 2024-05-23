void sensor_revisa(){
  // Leer HP (ph)
  int sensorValue = analogRead(sensorPin);

  // Convertir el valor analógico a voltaje
  float voltage = sensorValue * (5.0 / 1023.0);  // Suponiendo una referencia de voltaje de 5V y una resolución de 10 bits (1024 niveles)

  // Realizar la calibración de los valores según tus necesidades
  float calibratedValue = calibrate(sensorValue);
  //Conversion a escala de 0 a 14
  float valorPh = calibratedValue * 0.001;
  phSensor = String(valorPh).c_str();
   // Leer Turbidez
 int sensorValueTur = analogRead(sensorTBD);

  // Convertir el valor analógico a TDS utilizando una fórmula de calibración
  float tdsValue = convertToTDS(sensorValueTur);

  // Imprimir el valor de TDS en el monitor serial
  Serial.print("TDS: ");
  Serial.println(tdsValue);
  tdsSensor = String(tdsValue).c_str();

  // Leer temperatura
  sensorDS18B20.requestTemperatures();

  // Lee la temperatura en grados Celsius
  float temperaturaCelsius = sensorDS18B20.getTempCByIndex(0);
  tempSensor = String(temperaturaCelsius).c_str();
  
}


float calibrate(int sensorValue) {
  // Realizar aquí las operaciones de calibración que sean necesarias
  // Puedes utilizar fórmulas matemáticas o mapeo de valores según tus requerimientos

  // Ejemplo: Calibración lineal
  float calibratedValue = sensorValue * 2.0;

  return calibratedValue;
}

float convertToTDS(int sensorValue) {
  // Realizar aquí las operaciones de calibración para convertir el valor analógico a TDS
  // Utiliza la fórmula de calibración adecuada según las especificaciones de tu sensor

  // Ejemplo: Calibración lineal
  float tdsValue = sensorValue * 0.1;

  return tdsValue;
}