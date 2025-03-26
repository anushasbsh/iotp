#define led 2
#define gas A0
int result;
void setup()
{
  Serial.begin(9600);
 pinMode(led, OUTPUT);
  pinMode(gas, INPUT);
  
}

void loop()
{
 result = analogRead (gas);
  Serial.println(result);
  delay(250);
 if(result > 150)
 {           
  digitalWrite(led,HIGH);
}
  else {
  digitalWrite(led,LOW);
  }
}