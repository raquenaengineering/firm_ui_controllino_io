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


// serial ports //
#define SerialCom Serial2
#define SerialMon Serial

// ethernet stuff //


ControllinoIOModule con = ControllinoIOModule(SerialCom);



void setup() {

  SerialMon.begin(115200);                          // serial monitor for debugging 
  // SerialCom.begin(115200);                       // now this initialization is happening inside the class.

  con.setup();

  SerialMon.println("Setup finished");



  
}

void loop() {
  // put your main code here, to run repeatedly:

  con.run();            // run is non blocking, if you put some blocking code in main it will stop working. 

}