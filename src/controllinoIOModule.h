#ifndef CONTROLLINO_IO_MODULE_H
#define CONTROLLINO_IO_MODULE_H

#include <avr/wdt.h>

#include <Arduino.h> // If using Arduino IDE
#include "Controllino.h"
#include <HardwareSerial.h>

#include "command_list.h"

class ControllinoIOModule {
private:
    HardwareSerial& communicationInterface;

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



public:
    // Constructor
    ControllinoIOModule(HardwareSerial& serial);
    // Method to perform periodic tasks
    void setup();
    void run();
    void setupIO(void);
    void setIO(char c);
    void sendAnalogVals(void);
    void softwareReset(void);
    // Destructor
    ~ControllinoIOModule();

    // Methods to control the IO module can be added here



};

#endif // CONTROLLINO_IO_MODULE_H
