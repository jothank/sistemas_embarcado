#include <Servo.h>

Servo mservo;
int pos = 0;

void setup() {
  mservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 100; pos += 1) {
    mservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos <= 0; pos -= 1) {
    mservo.write(pos);
    delay(15);
  }
}
