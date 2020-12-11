int pinMotor = 9;
int motorSpeed = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {

    char a = Serial.read();

    if (a >= '0' && a <= '4') {

      motorSpeed = map(a, '0', '4', 0, 255);

      Serial.print("Max Speed ");
      Serial.println(a);

    }

  }

  boolean robotInput = digitalRead(2);

  if (robotInput == HIGH) {
    motorSpeed = 255;

  }
  else {
    //if (robotInput == LOW)

    motorSpeed = 0;
  }

  analogWrite(pinMotor, motorSpeed);

}
