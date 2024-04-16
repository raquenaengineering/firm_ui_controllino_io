#ifndef CONTROLLINO_IO_MODULE_H
#define CONTROLLINO_IO_MODULE_H

#include <avr/wdt.h>

#include <Arduino.h> // If using Arduino IDE
#include "Controllino.h"
#include <HardwareSerial.h>

#include "command_list.h"


// DEFINES //
// NOTE: MANY OF THEM CAN BE REPLACED BY CLASS VARIABLES ONCE EACH CONTROLLINO MODEL IS IMPLEMENTED //
#define N_ANALOG_PINS 10
#define N_DIGITAL_PINS 12
#define N_RELAYS 10

class ControllinoIOModule {
private:
    HardwareSerial& communicationInterface;

    const uint8_t analogPins[N_ANALOG_PINS] = {
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
    uint16_t analogVals[N_ANALOG_PINS];

    const uint8_t digitalPins[N_DIGITAL_PINS] = {
  CONTROLLINO_D0,
  CONTROLLINO_D2,
  CONTROLLINO_D1,
  CONTROLLINO_D3,
  CONTROLLINO_D4,
  CONTROLLINO_D5,
  CONTROLLINO_D6,
  CONTROLLINO_D7,
  CONTROLLINO_D8,
  CONTROLLINO_D9,
  CONTROLLINO_D10,
  CONTROLLINO_D11
};
    bool digitalVals[N_DIGITAL_PINS];

    const uint8_t relayPins[N_RELAYS] = {
  CONTROLLINO_R0,
  CONTROLLINO_R1,
  CONTROLLINO_R2,
  CONTROLLINO_R3,
  CONTROLLINO_R4,
  CONTROLLINO_R5,
  CONTROLLINO_R6,
  CONTROLLINO_R7,
  CONTROLLINO_R8,
  CONTROLLINO_R9
};
    bool relayVals[N_RELAYS];

public:
    // Constructor
    ControllinoIOModule(HardwareSerial& serial);
    // Method to perform periodic tasks
    void setup();
    void run();
    void setupIO(void);
    void setIO(char c);
    void sendAnalogVals(void);
    void sendDigitalVals(void);
    void sendRelayVals(void);
    void softwareReset(void);
    // Destructor
    ~ControllinoIOModule();

    // Methods to control the IO module can be added here


};

#endif // CONTROLLINO_IO_MODULE_H
