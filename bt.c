#include <SoftwareSerial.h>; 
SoftwareSerial mySerial(3, 2); 
void setup() { 
Serial.begin(9600); 
mySerial.begin(9600); 
Serial.println(“Initializing...”); 
Serial.println(“The device started, now you can pair it with bluetooth!”); 
} 
void loop() { 
if(Serial.available()) { 
mySerial.write(Serial.read()); 
} 
if(mySerial.available()) { 
Serial.write(mySerial.read()); 
} delay(20);
}