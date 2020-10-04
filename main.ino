#include <IRremote.h>
int bright;
int before;
int out = 9;        // connect your LED to pin 9
int RECV_PIN = 11;  // data out of IR receiver connects to pin 11

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  irrecv.enableIRIn();  // start the receiver
  before = 0;           // LED is turned off

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.value == 0x683BCAE6) {  // Code to turn the LED ON/OFF
      if (before == 0) {  // if the LED was turned off, then we turn it on
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        before = 1;  // LED is now turned on
      } else {
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        before = 0;
        bright = 255;
      }
    }

    if (results.value == 0xB54EF69A) {  // Code to turn the LED ON/OFF
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(1000);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(200);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(2500);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(3000);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
    }

    if (results.value == 0x79FD11D7) {  // Code to turn the LED ON/OFF
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(70);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
    }

    if (results.value == 0x39248A65) {  // Code to turn the LED ON/OFF
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(7, LOW);
      delay(70);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
    }

    if (results.value == 0xF0A9C043) {  // Code to turn the LED ON/OFF
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      analogWrite(9, 32);
    }

    if (results.value == 0xD246EF9D) {  // Code to turn the LED ON/OFF
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
    }

    if (results.value == 0x5A01601E) {  // Code to turn the LED ON/OFF
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
    }

    //ここからBuffaloリモコン
    if (results.value == 0x302EA15E) {  // じらし
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(1000);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(200);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(2500);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(3000);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
    }

    if (results.value == 0x302EF906) {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(50);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
    }

    if (results.value == 0x302EB946) {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(7, LOW);
      delay(70);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
      delay(20);
      digitalWrite(7, LOW);
      delay(20);
      digitalWrite(7, HIGH);
    }

    if (results.value == 0x302EC33C) {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      analogWrite(9, 32);
    }

    if (results.value == 0x302E43BC) {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
    }

    irrecv.resume();
  }
}
