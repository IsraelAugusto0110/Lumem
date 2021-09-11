#include <dht.h>

#include<dht.h>

#define dht_dpin A0 //Pino data do sensor

dht DHT;//inicializa o sensor

int temp, hum; // define variaveis temperatura e humidade

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void le(){
  DHT.read11(dht_dpin);//le as informações do sensor
  Serial.print("Umidade = ");
  Serial.print(DHT.humidity);
  Serial.print("%");
  Serial.print("Temperatura = ");
  Serial.print(DHT.temperature);
  Serial.print(" Celsius");
  temp = int(DHT.temperature);//armazena os valores de temperatura
  hum = int(DHT.humidity);//e humidate

  delay(5000);
}

void loop() {
  le();
}
