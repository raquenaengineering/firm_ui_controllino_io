
#include "controllino_io_module.h"

ControllinoIOModule::ControllinoIOModule(HardwareSerial& serialPort) {
  stream = &serialPort;
  static_cast<HardwareSerial*>(stream)->begin(9600); // Assuming baud rate is 9600, adjust as needed
}

ControllinoIOModule::ControllinoIOModule(Client& client) {
  stream = &client;
}

void ControllinoIOModule::send(const char* data) {
  stream->print(data);
}

String ControllinoIOModule::receive() {
  String receivedData;
  while (stream->available()) {
    char c = stream->read();
    receivedData += c;
  }
  return receivedData;
}

