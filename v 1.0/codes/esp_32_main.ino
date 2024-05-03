#define BLYNK_TEMPLATE_ID "TMPL3JnqNTUtX"
#define BLYNK_TEMPLATE_NAME "IOTBasedMiningBot"
#define BLYNK_AUTH_TOKEN "nn76ps23whZK_vQzONK1600r9kV37bEo"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include "DHT.h"

#define DHTPIN 23     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Tejas";  // type your wifi name
char pass[] = "12345678";  // type your wifi password

#define I1 15
#define I2 2
#define I3 4
#define I4 16

#define MQ4_AO_PIN   35  // ESP32's pin GPIO36 connected to AO pin of the MQ4 sensor
#define MQ135_AO_PIN 34  // ESP32's pin GPIO36 connected to AO pin of the MQ135 sensor

BLYNK_WRITE(V4) 
{
  if(param.asInt() == 1)
  {  
    Forward();
  }
  else
  { 
    stop_bot();
  }
}

BLYNK_WRITE(V1) 
{
  if(param.asInt() == 1)
  {  
    Back();
  }
  else
  { 
    stop_bot();
  }
}

void setup()
{
  pinMode(I1,OUTPUT);
  pinMode(I2,OUTPUT);
  pinMode(I3,OUTPUT);
  pinMode(I4,OUTPUT);
  pinMode(MQ4_AO_PIN,INPUT);
  pinMode(MQ135_AO_PIN,INPUT);
  dht.begin();
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  int MethaneValue = analogRead(MQ4_AO_PIN);

  int AirQualityValue = analogRead(MQ135_AO_PIN);
  
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V2, AirQualityValue);
  Blynk.virtualWrite(V3, MethaneValue);
  Blynk.run();
}

void stop_bot(void)
{
  digitalWrite(I1,LOW);
  digitalWrite(I2,LOW);
  digitalWrite(I3,LOW);
  digitalWrite(I4,LOW);
}

void Back(void)
{
  digitalWrite(I1,HIGH);
  digitalWrite(I2,LOW);
  digitalWrite(I3,HIGH);
  digitalWrite(I4,LOW);
}

void Forward(void)
{
  digitalWrite(I1,LOW);
  digitalWrite(I2,HIGH);
  digitalWrite(I3,LOW);
  digitalWrite(I4,HIGH);
}
