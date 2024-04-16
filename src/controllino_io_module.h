
/**
 * @file controllino_io_module.h
 * @author Raul Quesada Navarro (raquenaengineering@gmailc.om)
 * @brief
 * @version 1.0
 * @date 15.04.2024
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef __CONTROLLINO_IO_MODULE_H__ // multiple declaration guards
#define __CONTROLLINO_MODULE_H__

// standard arduino framework //
#include "Arduino.h"

// submodules //
#include "Controllino.h"

// local //
#include "command_list.h"
#include "Ethernet.h"
#include "ethernet_config.h"


class ControllinoIOModule {
  private:
    Stream* stream;

  public:
    ControllinoIOModule(HardwareSerial& serialPort);
    ControllinoIOModule(Client& client);

    void send(const char* data);
    String receive();
};


#endif