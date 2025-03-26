const int MQ_SENSOR= A0;
const int LED= 8;
void setup() {
pinMode(MQ_SENSOR, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);
}
void loop() {
int sensorValue = analogRead(MQ_SENSOR);
Serial.print("Sensor Value: ");
Serial.println(sensorValue);
if (sensorValue == HIGH) {
digitalWrite(LED, HIGH);
} else {
digitalWrite(LED, LOW);
}
delay(1000);
}