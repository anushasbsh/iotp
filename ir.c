int IRSensor = 9;
int LED = 13;
void setup() {
 Serial.begin(115200);
 pinMode(IRSensor, INPUT);
 pinMode(LED, OUTPUT);
}
void loop() {
 int sensorStatus = digitalRead(IRSensor);
 if (sensorStatus == 1) {
 digitalWrite(LED, LOW);
 Serial.println("Motion Ended!");
 } else {
 digitalWrite(LED, HIGH);
 Serial.println("Motion Detected!");
 }
}