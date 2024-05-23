void pantalla_Mostrar(){
  //Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  //Heltec.display->setFont(ArialMT_Plain_10);
  
  Heltec.display -> drawString(0, 0, "Num de pack enviados: "+ String(id_msjLoRa));
  //Heltec.display->setFont(ArialMT_Plain_11);
  Heltec.display ->drawString(0, 10, "PH: " + phSensor);
  Heltec.display ->drawString(0, 20, "Turbidez: " + tdsSensor);
  Heltec.display ->drawString(0, 30, "Temperatura: " + tempSensor+" C");
  //Heltec.display ->drawString(0, 50, "dir Local: " + String(dir_local, HEX));
  Heltec.display ->drawString(0, 50, "RSSI: " + String(rssi_lora)+ " dBm");
  //Heltec.display ->drawString(0, 70, "señal-ruido" + snr_lora);
  //Heltec.display -> display();
}