#include "controllinoIOModule.h"

// Constructor
ControllinoIOModule::ControllinoIOModule(HardwareSerial& serial) : communicationInterface(serial) {
    // Initialize any necessary variables or settings
}


// Method to perform periodic tasks
void ControllinoIOModule::loop() {
    // Implement any periodic tasks or continuous operations here
    // This method will be called repeatedly in the main loop

    while(1){
        // do repetitive stuff here //
        communicationInterface.write("a");
    }

}


// Destructor
ControllinoIOModule::~ControllinoIOModule() {
    // Cleanup, if necessary
}

// Methods to control the IO module can be implemented here
