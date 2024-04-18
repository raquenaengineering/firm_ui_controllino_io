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
#include "ethernet_config.h"
#include "controllinoIOModule.h"


// serial ports //
#define SerialCom Serial2
#define SerialMon Serial

// ethernet stuff //
EthernetServer serverIO(CONTROLLINO_IO_PORT);                 // for tcp communication, there MUST be a server, which can accept connections from clients.
EthernetClient clientIO;                                    // declared as global, so it doesn't get mashed on each iteration.


ControllinoIOModule con = ControllinoIOModule(SerialCom);



void setup() {

  SerialMon.begin(115200);                          // serial monitor for debugging 
 
 
  Ethernet.begin(mac,local_ip);
  serverIO.begin();
  Serial.println(Ethernet.localIP());

  con.setup();

  SerialMon.println("Setup finished");



  
}

void loop() {
  // put your main code here, to run repeatedly:

  // EthernetClient clientIO = serverIO.available();
  clientIO = serverIO.available();
  
  if(clientIO){
    Serial.println("NEW CLIENT");
    if(clientIO.connected()){
      Serial.println("Client connected");
      while(clientIO.available()){
        char c = clientIO.read();
        con.processCommand(c);
        // clientIO.write(c);
        Serial.write(c);
      }
    }
  }


  con.run();            // run is non blocking, if you put some blocking code in main it will stop working. 

}