int sensorState = 0;
int prevState = HIGH;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorState = digitalRead(2);

  if (sensorState == LOW && prevState == HIGH) { // Detect object only on state change
    Serial.println("Object Detected");
    digitalWrite(LED_BUILTIN, LOW);
  } else if (sensorState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  }

  prevState = sensorState; // Update previous state
  delay(10);
}