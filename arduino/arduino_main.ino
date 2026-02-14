#include <Servo.h>

// ===== SETTINGS =====
#define numberOfValsRec 5   // how many values we receive
#define digitsPerValRec 1

Servo servoThumb;
Servo servoIndex;
Servo servoMiddle;
Servo servoRing;
Servo servoPinky;

int valsRec[numberOfValsRec];

int stringLength = numberOfValsRec * digitsPerValRec + 1; // +1 for start char ($)
int counter = 0;
bool counterStart = false;
String receivedString = "";

// ===== SETUP =====
void setup() {
  Serial.begin(9600);

  // Servo pins
  servoThumb.attach(7);   // thumb
  servoIndex.attach(9);   // index
  servoMiddle.attach(11); // middle
  servoRing.attach(8);    // ring
  servoPinky.attach(10);  // pinky
}

// ===== SERIAL DATA RECEIVE =====
void receiveData() {
  while (Serial.available()) {
    char c = Serial.read();

    // Start flag
    if (c == '$') {
      counterStart = true;
    }

    if (counterStart) {
      if (counter < stringLength) {
        receivedString += c;
        counter++;
      }

      if (counter >= stringLength) {

        // Parse incoming values
        for (int i = 0; i < numberOfValsRec; i++) {
          int num = i * digitsPerValRec + 1;
          valsRec[i] = receivedString.substring(num, num + digitsPerValRec).toInt();
        }

        receivedString = "";
        counter = 0;
        counterStart = false;
      }
    }
  }
}

// ===== MAIN LOOP =====
void loop() {

  receiveData();

  // Thumb
  if (valsRec[0] == 1) servoThumb.write(180);
  else servoThumb.write(0);

  // Index
  if (valsRec[1] == 1) servoIndex.write(180);
  else servoIndex.write(0);

  // Middle
  if (valsRec[2] == 1) servoMiddle.write(180);
  else servoMiddle.write(0);

  // Ring
  if (valsRec[3] == 1) servoRing.write(180);
  else servoRing.write(0);

  // Pinky
  if (valsRec[4] == 1) servoPinky.write(180);
  else servoPinky.write(0);
}