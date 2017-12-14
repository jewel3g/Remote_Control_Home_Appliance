
#include <IRremote.h>
const int RECV_PIN = 10;
IRrecv irrecv(RECV_PIN);
decode_results results;
int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
int led1 = 4, led2 = 5, led3 = 6, led4 = 7;


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {

    if (results.value == 0x10EF807F) {
      if (flag1 == 0) {
        digitalWrite(led1, HIGH);
        flag1 = 1;
      }
      else {
        digitalWrite(led1, LOW);
        flag1 = 0;
      }
    }


    if (results.value == 0x10EF40BF) {
      if (flag2 == 0) {
        digitalWrite(led2, HIGH);
        flag2 = 1;
      }
      else {
        digitalWrite(led2, LOW);
        flag2 = 0;
      }
    }


    if (results.value == 0x10EFC03F) {
      if (flag3 == 0) {
        digitalWrite(led3, HIGH);
        flag3 = 1;
      }
      else {
        digitalWrite(led3, LOW);
        flag3 = 0;
      }
    }


    if (results.value == 0x10EF20DF) {
      if (flag4 == 0) {
        digitalWrite(led4, HIGH);
        flag4 = 1;
      }
      else {
        digitalWrite(led4, LOW);
        flag4 = 0;
      }
    }



    Serial.println(results.value, HEX);
    irrecv.resume();
  }



}
