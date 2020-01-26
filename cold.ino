#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN 2
#define led1 4
#define led2 7
#define led3 8
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(led1,LOW);
 pinMode(led2,LOW);
  pinMode(led3,LOW);
}

void loop() {
  
 delay(2000);
 float t = dht.readTemperature();

Serial.print(F("%  Temperature: "));
 Serial.print(F("%  Temperature: "));
  Serial.print(t);
 
  if(t>20&&t<30){
  digitalWrite(led1,HIGH);}
  if(t>30&&t<35)
  {
  digitalWrite(led2,HIGH);}
  if(t>35)
  {
  digitalWrite(led2,HIGH);}
  delay(500);
  
}
