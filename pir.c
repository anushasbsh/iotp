const int PIR_SENSOR_OUTPUT_PIN = 4;
int warm_up;
void setup() 
{
 pinMode(PIR_SENSOR_OUTPUT_PIN, INPUT);
 pinMode(2,OUTPUT);
 Serial.begin(9600);
 delay(20000);
}
void loop() 
{
 int sensor_output = digitalRead(PIR_SENSOR_OUTPUT_PIN);
 if(sensor_output == LOW)
{
 if(warm_up == 1) 
 {
 Serial.print("Warming Up\n\n");
 digitalWrite(2,LOW);
 warm_up = 0;
 delay(2000);
 }
 Serial.print("No object in sight\n\n");
 delay(1000);
 } 
else 
{
 Serial.print("Object detected\n\n");
 digitalWrite(2,HIGH);
 warm_up = 1;
 delay(1000);
 }
}