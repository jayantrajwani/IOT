#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "a957dcf894cf469eb3254284590dad60";
char ssid[] = "Jayant"; //wifi username
char pass[] = "8885444431" //wifi password
void setup()
{Serial.begin(9600); //for writing on serial monitor ar baud rate 9600
 Blynk.begin(auth, ssid, pass);}
void loop()
{Blynk.run();}
