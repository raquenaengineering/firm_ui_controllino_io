#include "controllinoIOModule.h"

// Constructor
ControllinoIOModule::ControllinoIOModule(HardwareSerial& serial) : communicationInterface(serial) {
    // Initialize any necessary variables or settings
}

void ControllinoIOModule::setup(void) {
    setupIO();
}

void ControllinoIOModule::setupIO(void) {

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


void ControllinoIOModule::setIO(char c) {
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

void ControllinoIOModule::sendAnalogVals(void) {

//   // right now this function is only a mockup!!!
//   // need to implement the read of ALL CHANNELS
//   // need to implement SPLIT OF HIGH AND LOW BYTES
//   // need to WRITE ALL VALUES TO SERIALCOM

  uint16_t analogVals[10];

  for(uint8_t i = 0; i < 10; i++){
    uint16_t analogVal = analogRead(analogPins[i]);

    uint8_t aVal_msb = analogVal >> 8;
    uint8_t aVal_lsb = analogVal % 256;

    uint16_t reconverted = (aVal_msb << 8) + aVal_lsb;

    communicationInterface.write(aVal_msb);
    communicationInterface.write(aVal_lsb);

    // FIND AN EASY WAY TO ENABLE/DISABLE THE DEBUG MESSAGES //
    // SerialMon.print(i);
    // SerialMon.print(" analogVal = ");
    // SerialMon.println(analogVal);

    // SerialMon.println(aVal_msb);
    // SerialMon.println(aVal_lsb);

    // SerialMon.print(i);
    // SerialMon.print(" analogVal reconverted = ");
    // SerialMon.println(reconverted);
  } 

  // SerialCom.println();                // end of line to determine end of analog data. 
  communicationInterface.write('\r');
  communicationInterface.write('\n');                // end of line to determine end of analog data. 
}

void ControllinoIOModule::softwareReset(void) {

}



// Method to perform periodic tasks
void ControllinoIOModule::loop() {
    // Implement any periodic tasks or continuous operations here
    // This method will be called repeatedly in the main loop

    while(1){
        while(communicationInterface.available()){
            char c = communicationInterface.read();
            if(c == cmd_request_analog_inputs){
            sendAnalogVals();
            }
            if(c == cmd_software_reset){
            softwareReset();
            }
            //SerialMon.println(c);
            setIO(c);
        }
    }

}




// Destructor
ControllinoIOModule::~ControllinoIOModule() {
    // Cleanup, if necessary
}

// Methods to control the IO module can be implemented here
