#include <Keyboard.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (!digitalRead(2)) {
    Keyboard.print("hello");
    while (!digitalRead(2));
  }
}
