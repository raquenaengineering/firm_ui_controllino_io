#include <Arduino.h>

// Submodules // 
#include "Controllino.h"


#define SerialCom Serial
#define SerialMon Serial

// put function declarations here:
void setupIO(void);

void setIO(char c);


void setup() {
 
  setupIO();
  Serial.begin(115200);
  Serial.println("Setup finished");

  
}

void loop() {
  // put your main code here, to run repeatedly:

  while(SerialCom.available()){
    char c = SerialCom.read();
    SerialMon.println(c);
    setIO(c);
  }


}

// put function definitions here:
void setupIO(void){

  // relays //
  pinMode(CONTROLLINO_R0, OUTPUT);
  pinMode(CONTROLLINO_R1, OUTPUT);
  pinMode(CONTROLLINO_R2, OUTPUT);
  pinMode(CONTROLLINO_R3, OUTPUT);

  pinMode(CONTROLLINO_R4, OUTPUT);
  pinMode(CONTROLLINO_R5, OUTPUT);
  pinMode(CONTROLLINO_R6, OUTPUT);
  pinMode(CONTROLLINO_R7, OUTPUT);

  pinMode(CONTROLLINO_R8, OUTPUT);
  pinMode(CONTROLLINO_R9, OUTPUT);

  // digital pins // 

  pinMode(CONTROLLINO_D0, OUTPUT);
  pinMode(CONTROLLINO_D1, OUTPUT);
  pinMode(CONTROLLINO_D2, OUTPUT);
  pinMode(CONTROLLINO_D3, OUTPUT);

  pinMode(CONTROLLINO_D4, OUTPUT);
  pinMode(CONTROLLINO_D5, OUTPUT);
  pinMode(CONTROLLINO_D6, OUTPUT);
  pinMode(CONTROLLINO_D7, OUTPUT);

  pinMode(CONTROLLINO_D8, OUTPUT);
  pinMode(CONTROLLINO_D9, OUTPUT);
  pinMode(CONTROLLINO_D10, OUTPUT);
  pinMode(CONTROLLINO_D11, OUTPUT);

  // analog pins / only input // 

  pinMode(CONTROLLINO_IN0, INPUT);
  pinMode(CONTROLLINO_IN1, INPUT);

}


void setIO(char c){

  // DIGITAL OUTPUTS //
   if(c == '+'){
    digitalWrite(CONTROLLINO_D0, HIGH);
  }
  if(c == '*'){
    digitalWrite(CONTROLLINO_D0, LOW);
  }
  // r1
  if(c == '1'){
    digitalWrite(CONTROLLINO_D1, HIGH);
  }
  if(c == '!'){
    digitalWrite(CONTROLLINO_D1, LOW);
  }
  // r2
  if(c == '2'){
    digitalWrite(CONTROLLINO_D2, HIGH);
  }
  if(c == '"'){
    digitalWrite(CONTROLLINO_D2, LOW);
  }
  // r3
  if(c == '3'){
    digitalWrite(CONTROLLINO_D3, HIGH);
  }
  if(c == '·'){
    digitalWrite(CONTROLLINO_D3, LOW);
  }
  // r4
  if(c == '4'){
    digitalWrite(CONTROLLINO_D4, HIGH);
  }
  if(c == '$'){
    digitalWrite(CONTROLLINO_D4, LOW);
  }
  // r5
  if(c == '5'){
    digitalWrite(CONTROLLINO_D5, HIGH);
  }
  if(c == '%'){
    digitalWrite(CONTROLLINO_D5, LOW);
  }
  // r6
  if(c == '6'){
    digitalWrite(CONTROLLINO_D6, HIGH);
  }
  if(c == '&'){
    digitalWrite(CONTROLLINO_D6, LOW);
  }
  // r7
  if(c == '7'){
    digitalWrite(CONTROLLINO_D7, HIGH);
  }
  if(c == '/'){
    digitalWrite(CONTROLLINO_D7, LOW);
  }
  // r8
  if(c == '8'){
    digitalWrite(CONTROLLINO_D8, HIGH);
  }
  if(c == '('){
    digitalWrite(CONTROLLINO_D8, LOW);
  }
  // r9
  if(c == '9'){
    digitalWrite(CONTROLLINO_D9, HIGH);
  }
  if(c == ')'){
    digitalWrite(CONTROLLINO_D9, LOW);
  }
  // r8
  if(c == '0'){
    digitalWrite(CONTROLLINO_D10, HIGH);
  }
  if(c == '='){
    digitalWrite(CONTROLLINO_D10, LOW);
  }
  // r9
  if(c == 0x27){                                  
    digitalWrite(CONTROLLINO_D11, HIGH);
  }
  if(c == '?'){
    digitalWrite(CONTROLLINO_D11, LOW);
  }

  // RELAYS // 
  // r0
  if(c == 'q'){
    digitalWrite(CONTROLLINO_R0, HIGH);
  }
  if(c == 'Q'){
    digitalWrite(CONTROLLINO_R0, LOW);
  }
  // r1
  if(c == 'w'){
    digitalWrite(CONTROLLINO_R1, HIGH);
  }
  if(c == 'W'){
    digitalWrite(CONTROLLINO_R1, LOW);
  }
  // r2
  if(c == 'e'){
    digitalWrite(CONTROLLINO_R2, HIGH);
  }
  if(c == 'E'){
    digitalWrite(CONTROLLINO_R2, LOW);
  }
  // r3
  if(c == 'r'){
    digitalWrite(CONTROLLINO_R3, HIGH);
  }
  if(c == 'R'){
    digitalWrite(CONTROLLINO_R3, LOW);
  }
  // r4
  if(c == 't'){
    digitalWrite(CONTROLLINO_R4, HIGH);
  }
  if(c == 'T'){
    digitalWrite(CONTROLLINO_R4, LOW);
  }
  // r5
  if(c == 'y'){
    digitalWrite(CONTROLLINO_R5, HIGH);
  }
  if(c == 'Y'){
    digitalWrite(CONTROLLINO_R5, LOW);
  }
  // r6
  if(c == 'u'){
    digitalWrite(CONTROLLINO_R6, HIGH);
  }
  if(c == 'U'){
    digitalWrite(CONTROLLINO_R6, LOW);
  }
  // r7
  if(c == 'i'){
    digitalWrite(CONTROLLINO_R7, HIGH);
  }
  if(c == 'I'){
    digitalWrite(CONTROLLINO_R7, LOW);
  }
  // r8
  if(c == 'o'){
    digitalWrite(CONTROLLINO_R8, HIGH);
  }
  if(c == 'O'){
    digitalWrite(CONTROLLINO_R8, LOW);
  }
  // r9
  if(c == 'p'){
    digitalWrite(CONTROLLINO_R9, HIGH);
  }
  if(c == 'P'){
    digitalWrite(CONTROLLINO_R9, LOW);
  }

}


