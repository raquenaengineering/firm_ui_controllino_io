#include <Arduino.h>

// Submodules // 
#include "Controllino.h"

// local libraries //
#include "command_list.h"

#define SerialCom Serial2
#define SerialMon Serial

const uint8_t analogPins[10] = {
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_00,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_01,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_02,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_03,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_04,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_05,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_06,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_07,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_08,
  CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_09
};

// put function declarations here:
void setupIO(void);

void setIO(char c);

void sendAnalogVal(void);

void sendAnalogVals(void);


void setup() {
 
  setupIO();
  SerialCom.begin(115200);                          // for the actual device communication
  SerialMon.begin(115200);                          // serial monitor for debugging 
  SerialMon.println("Setup finished");

  
}

void loop() {
  // put your main code here, to run repeatedly:

  while(SerialCom.available()){
    char c = SerialCom.read();
    if(c == cmd_request_analog_inputs){
      sendAnalogVals();
    }
    //SerialMon.println(c);
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
  if(c == cmd_pin_d0_on){
    digitalWrite(CONTROLLINO_D0, HIGH);
  }
  if(c == cmd_pin_d0_off){
    digitalWrite(CONTROLLINO_D0, LOW);
  }
  // d1
  if(c == cmd_pin_d1_on){
    digitalWrite(CONTROLLINO_D1, HIGH);
  }
  if(c == cmd_pin_d1_off){
    digitalWrite(CONTROLLINO_D1, LOW);
  }
  // d2
  if(c == cmd_pin_d2_on){
    digitalWrite(CONTROLLINO_D2, HIGH);
  }
  if(c == cmd_pin_d2_off){
    digitalWrite(CONTROLLINO_D2, LOW);
  }
  // d3
  if(c == cmd_pin_d3_on){
    digitalWrite(CONTROLLINO_D3, HIGH);
  }
  if(c == cmd_pin_d3_off){
    digitalWrite(CONTROLLINO_D3, LOW);
  }
  // d4
  if(c == cmd_pin_d4_on){
    digitalWrite(CONTROLLINO_D4, HIGH);
  }
  if(c == cmd_pin_d4_off){
    digitalWrite(CONTROLLINO_D4, LOW);
  }
  // d5
  if(c == cmd_pin_d5_on){
    digitalWrite(CONTROLLINO_D5, HIGH);
  }
  if(c == cmd_pin_d5_off){
    digitalWrite(CONTROLLINO_D5, LOW);
  }
  // d6
  if(c == cmd_pin_d6_on){
    digitalWrite(CONTROLLINO_D6, HIGH);
  }
  if(c == cmd_pin_d6_off){
    digitalWrite(CONTROLLINO_D6, LOW);
  }
  // d7
  if(c == cmd_pin_d7_on){
    digitalWrite(CONTROLLINO_D7, HIGH);
  }
  if(c == cmd_pin_d7_off){
    digitalWrite(CONTROLLINO_D7, LOW);
  }
  // d8
  if(c == cmd_pin_d8_on){
    digitalWrite(CONTROLLINO_D8, HIGH);
  }
  if(c == cmd_pin_d8_off){
    digitalWrite(CONTROLLINO_D8, LOW);
  }
  // d9
  if(c == cmd_pin_d9_on){
    digitalWrite(CONTROLLINO_D9, HIGH);
  }
  if(c == cmd_pin_d9_off){
    digitalWrite(CONTROLLINO_D9, LOW);
  }
  // d10
  if(c == cmd_pin_d10_on){
    digitalWrite(CONTROLLINO_D10, HIGH);
  }
  if(c == cmd_pin_d10_off){
    digitalWrite(CONTROLLINO_D10, LOW);
  }
  // d11
  if(c == cmd_pin_d11_on){                                  
    digitalWrite(CONTROLLINO_D11, HIGH);
  }
  if(c == cmd_pin_d11_off){
    digitalWrite(CONTROLLINO_D11, LOW);
  }

  // RELAYS // 
  // r0
  if(c == cmd_pin_r0_on){
    digitalWrite(CONTROLLINO_R0, HIGH);
  }
  if(c == cmd_pin_r0_off){
    digitalWrite(CONTROLLINO_R0, LOW);
  }
  // r1
  if(c == cmd_pin_r1_on){
    digitalWrite(CONTROLLINO_R1, HIGH);
  }
  if(c == cmd_pin_r1_off){
    digitalWrite(CONTROLLINO_R1, LOW);
  }
  // r2
  if(c == cmd_pin_r2_on){
    digitalWrite(CONTROLLINO_R2, HIGH);
  }
  if(c == cmd_pin_r2_off){
    digitalWrite(CONTROLLINO_R2, LOW);
  }
  // r3
  if(c == cmd_pin_r3_on){
    digitalWrite(CONTROLLINO_R3, HIGH);
  }
  if(c == cmd_pin_r3_off){
    digitalWrite(CONTROLLINO_R3, LOW);
  }
  // r4
  if(c == cmd_pin_r4_on){
    digitalWrite(CONTROLLINO_R4, HIGH);
  }
  if(c == cmd_pin_r4_off){
    digitalWrite(CONTROLLINO_R4, LOW);
  }
  // r5
  if(c == cmd_pin_r5_on){
    digitalWrite(CONTROLLINO_R5, HIGH);
  }
  if(c == cmd_pin_r5_off){
    digitalWrite(CONTROLLINO_R5, LOW);
  }
  // r6
  if(c == cmd_pin_r6_on){
    digitalWrite(CONTROLLINO_R6, HIGH);
  }
  if(c == cmd_pin_r6_off){
    digitalWrite(CONTROLLINO_R6, LOW);
  }
  // r7
  if(c == cmd_pin_r7_on){
    digitalWrite(CONTROLLINO_R7, HIGH);
  }
  if(c == cmd_pin_r7_off){
    digitalWrite(CONTROLLINO_R7, LOW);
  }
  // r8
  if(c == cmd_pin_r8_on){
    digitalWrite(CONTROLLINO_R8, HIGH);
  }
  if(c == cmd_pin_r8_off){
    digitalWrite(CONTROLLINO_R8, LOW);
  }
  // r9
  if(c == cmd_pin_r9_on){
    digitalWrite(CONTROLLINO_R9, HIGH);
  }
  if(c == cmd_pin_r9_off){
    digitalWrite(CONTROLLINO_R9, LOW);
  }

}

void sendAnalogVals(void){

  // right now this function is only a mockup!!!
  // need to implement the read of ALL CHANNELS
  // need to implement SPLIT OF HIGH AND LOW BYTES
  // need to WRITE ALL VALUES TO SERIALCOM

  uint16_t analogVals[10];

  for(uint8_t i = 0; i < 10; i++){
    uint16_t analogVal = analogRead(analogPins[i]);

    uint8_t aVal_msb = analogVal >> 8;
    uint8_t aVal_lsb = analogVal % 256;

    uint16_t reconverted = (aVal_msb << 8) + aVal_lsb;

    SerialCom.write(aVal_msb);
    SerialCom.write(aVal_lsb);

    SerialMon.print(i);
    SerialMon.print(" analogVal = ");
    SerialMon.println(analogVal);

    SerialMon.println(aVal_msb);
    SerialMon.println(aVal_lsb);

    SerialMon.print(i);
    SerialMon.print(" analogVal reconverted = ");
    SerialMon.println(reconverted);
    

  } 

  SerialCom.println();                // end of line to determine end of analog data. 

  // uint16_t a0 = analogRead(CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_00);
  // uint8_t a0_msb = a0 >> 8;
  // uint8_t a0_lsb = a0 % 256;

  // uint16_t a1 = analogRead(CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_01);
  // uint8_t a1_msb = a1 >> 8;
  // uint8_t a1_lsb = a1 % 256;

  // uint16_t a2 = analogRead(CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_02);
  // uint8_t a2_msb = a2 >> 8;
  // uint8_t a2_lsb = a2 % 256;

  // uint16_t a3 = analogRead(CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_03);
  // uint8_t a3_msb = a3 >> 8;
  // uint8_t a3_lsb = a3 % 256;

  // channels 0-3 //
  // SerialCom.write(a0_msb);
  // SerialCom.write(a0_lsb);

  // SerialCom.write(a1_msb);
  // SerialCom.write(a1_lsb);

  // SerialCom.write(a2_msb);
  // SerialCom.write(a2_lsb);

  // SerialCom.write(a3_msb);
  // SerialCom.write(a3_lsb);

  // // channels 4-7 //
  // SerialCom.write(a0_msb);
  // SerialCom.write(a0_lsb);

  // SerialCom.write(a1_msb);
  // SerialCom.write(a1_lsb);

  // SerialCom.write(a2_msb);
  // SerialCom.write(a2_lsb);

  // SerialCom.write(a3_msb);
  // SerialCom.write(a3_lsb);

  // // channels 7-11 //
  // SerialCom.write(a0_msb);
  // SerialCom.write(a0_lsb);

  // SerialCom.write(a1_msb);
  // SerialCom.write(a1_lsb);

  // SerialCom.write(a3_msb);
  // SerialCom.write(a2_lsb);

  // SerialCom.write(a3_msb);
  // SerialCom.write(a3_lsb);



}

void sendAnalogVal(void){

}

