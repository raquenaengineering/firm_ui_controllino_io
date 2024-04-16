#ifndef __COMMAND_LIST_H__ // multiple declaration guards
#define __COMMAND_LIST_H__


// SOFT RESET //

const char cmd_software_reset = ' ';

// DIGITAL OUTPUTS // 

const char cmd_pin_d0_on = '+';
const char cmd_pin_d0_off = '*';

const char cmd_pin_d1_on = '1';
const char cmd_pin_d1_off = '!';

const char cmd_pin_d2_on = '2';
const char cmd_pin_d2_off = '"';

const char cmd_pin_d3_on = '3';
const char cmd_pin_d3_off = '#';


const char cmd_pin_d4_on = '4';
const char cmd_pin_d4_off = '$';

const char cmd_pin_d5_on = '5';
const char cmd_pin_d5_off = '%';

const char cmd_pin_d6_on = '6';
const char cmd_pin_d6_off = '&';

const char cmd_pin_d7_on = '7';
const char cmd_pin_d7_off = '/';


const char cmd_pin_d8_on = '8';
const char cmd_pin_d8_off = '(';

const char cmd_pin_d9_on = '9';
const char cmd_pin_d9_off = ')';

const char cmd_pin_d10_on = '0';
const char cmd_pin_d10_off = '=';

const char cmd_pin_d11_on = 0x27;
const char cmd_pin_d11_off = '?';

// RELAYS // 

const char cmd_pin_r0_on = 'q';
const char cmd_pin_r0_off = 'Q';

const char cmd_pin_r1_on = 'w';
const char cmd_pin_r1_off = 'W';

const char cmd_pin_r2_on = 'e';
const char cmd_pin_r2_off = 'E';

const char cmd_pin_r3_on = 'r';
const char cmd_pin_r3_off = 'R';


const char cmd_pin_r4_on = 't';
const char cmd_pin_r4_off = 'T';

const char cmd_pin_r5_on = 'y';
const char cmd_pin_r5_off = 'Y';

const char cmd_pin_r6_on = 'u';
const char cmd_pin_r6_off = 'U';

const char cmd_pin_r7_on = 'i';
const char cmd_pin_r7_off = 'I';


const char cmd_pin_r8_on = 'o';
const char cmd_pin_r8_off = 'O';

const char cmd_pin_r9_on = 'p';
const char cmd_pin_r9_off = 'P';


// READ VALUES //

// const char cmd_request_inputs = '-';
const char cmd_request_analog_inputs = '-';
const char cmd_request_digital_outputs = '_';
const char cmd_request_relay_outputs = ',';
const char cmd_request_all = ';';

#endif