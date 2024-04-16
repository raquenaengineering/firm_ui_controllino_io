#ifndef __ETHERNET_CONFIG_H__
#define __ETHERNET_CONFIG_H__

# include "Ethernet.h"

// byte mac[] = { 0x90, 0xA2, 0xDA, 0x00, 0x09, 0x70 };      // should be written on the back side of the controllino. 
// IPAddress ip(192,168,4,201);                              // ip of your choice. 
// IPAddress gateway(192,168,1, 1);
// IPAddress subnet(255, 255, 0, 0);

// ETHERNET CONFIGURATION ///////////////////////////////////////////////

byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};

IPAddress local_ip(192, 168, 4, 128);
IPAddress gateway(192, 168, 4, 1);
IPAddress subnet(255, 255, 0, 0);

IPAddress primaryDNS(8, 8, 8, 8); 
IPAddress secondaryDNS(8, 8, 4, 4);


#define CONTROLLINO_IO_PORT 8881
 
#endif