#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; //current position
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos; //previous position
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50]; // for storing positions/steps
int speedDelay = 20;
int index = 0;
String dataIn;
int m = 0;
void setup() {
  servo01.attach(3);
  servo02.attach(5);
  servo03.attach(6);
  servo04.attach(9);
  servo05.attach(10);
  servo06.attach(11);
  Serial.begin(9600); // Default baud rate of the Serial module
// Serial.setTimeout(1);
//delay(20);
// Robot arm initial position
  servo1PPos = 90;
  servo01.write(servo1PPos);
  servo2PPos = 90;
  servo02.write(servo2PPos);
  servo3PPos = 90;
  servo03.write(servo3PPos);
  servo4PPos = 76;
  servo04.write(servo4PPos);
  servo5PPos = 115;
  servo05.write(servo5PPos);
  servo6PPos = 80;
  servo06.write(servo6PPos);
}
void loop() {
// Check for incoming data
  if (Serial.available() > 0) {
    dataIn = Serial.read();  // Read the data

    if (dataIn == 0) {
      m = 0;
    }
    if (dataIn == 1) {
      m = 1;
    }
    if (dataIn == 2) {
      m = 2;
    }
    if (dataIn == 3) {
      m = 3;
    }
    if (dataIn == 4) {
      m = 4;
    }
    if (dataIn == 5) {
      m = 5;
    }
    if (dataIn == 6) {
      m = 6;
    }
    if (dataIn == 7) {
      m = 7;
    }
    if (dataIn == 8) {
      m = 8;
    }
    if (dataIn == 9) {
      m = 9;
    }
    if (dataIn == 10) {
      m = 10;
    }
    if (dataIn == 11) {
      m = 11;
    }
    if (dataIn == 12) {
      m = 12;
    }
    if (dataIn == 14) {
      m = 14;
    }
    if (dataIn == 16) {
      m = 16;
    }
    if (dataIn == 17) {
      m = 17;
    }
    if (dataIn == 18) {
      m = 18;
    }
    if (dataIn == 19) {
      m = 19;
    }
    if (dataIn == 20) {
      m = 20;
    }
    if (dataIn == 21) {
      m = 21;
    }
    if (dataIn == 22) {
      m = 22;
    }
    if (dataIn == 23) {
      m = 23;
    }
    if (dataIn == 24) {
      m = 24;
    }
    if (dataIn == 25) {
      m = 25;
    }
    if (dataIn == 26) {
      m = 26;
    }
    if (dataIn == 27) {
      m = 27;
    }

  

    // Move robot arm
    // Move servo 1 in positive direction
    while (m == 0) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      delay(speedDelay);
    }
    // Move servo 1 in negative direction
    while (m == 1) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
      delay(speedDelay);
    }
    // Move servo 2
    while (m == 2) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      delay(speedDelay);
    }
    while (m == 3) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
      delay(speedDelay);
    }
    // Move servo 3
    while (m == 4) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
      delay(speedDelay);
    }
    while (m == 5) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      delay(speedDelay);
    }
    // Move servo 4
    while (m == 6) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
      delay(speedDelay);
    }
    while (m == 7) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
      delay(speedDelay);
    }
    // Move servo 5
    while (m == 8) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
      delay(speedDelay);
    }
    while (m == 9) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      delay(speedDelay);
    }
    // Move servo 6
    while (m == 26) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo06.write(servo6PPos);
      servo6PPos++;
      delay(speedDelay);
    }
    while (m == 27) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
      delay(speedDelay);
    }
}
}