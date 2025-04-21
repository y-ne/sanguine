void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Serial Echo Ready!");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    Serial.print("You said: ");
    Serial.println(input);
  }
}
