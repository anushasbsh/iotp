int sig = 7;
int led = 13;


void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void blink()
{
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(400);
}


void loop()
{
  pinMode(sig, OUTPUT);
  digitalWrite(sig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(sig, HIGH);
  delayMicroseconds(10);
  
  pinMode(sig, INPUT);
  
  float time = pulseIn(sig, HIGH);
  float distance = (time * 0.0343)/2;
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance > 100) blink();
}