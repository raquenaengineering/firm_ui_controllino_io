// low level //
#include <avr/wdt.h>
// arduino library //
#include <Arduino.h>

// standard includes of Arduino //
#include <SPI.h>

// Submodules // 
#include "Controllino.h"
#include "Ethernet.h"


// local libraries //
#include "command_list.h"
#include "controllinoIOModule.h"



#define SerialCom Serial2
#define SerialMon Serial


ControllinoIOModule con = ControllinoIOModule(SerialCom);



void setup() {
 
  con.setup();
  SerialMon.begin(115200);                          // serial monitor for debugging 
  SerialMon.println("Setup finished");

  
}

void loop() {
  // put your main code here, to run repeatedly:

  con.run();

}