#include <Arduino.h>


#define SerialCom Serial
#define SerialMon Serial

// put function declarations here:
void setupIO(void);


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
  }


}

// put function definitions here:
void setupIO(void){

}


