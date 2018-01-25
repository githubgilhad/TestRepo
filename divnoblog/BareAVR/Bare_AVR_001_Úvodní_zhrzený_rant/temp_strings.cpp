#include <string.h>
#include "temp_strings.h"
namespace temp_strings{
static char numbers[]="0123456789ABCDEF";
char buf[20];

char * long_2_hex(uint32_t x) { strcpy(buf," &00000000 ");for (uint8_t i=9;x>0;--i) {buf[i]= numbers[x & 0x0F]; x>>=4;}; return buf;}
char * word_2_hex(uint16_t x){ strcpy(buf," &0000 ");for (uint8_t i=5;x>0;--i) {buf[i]= numbers[x & 0x0F]; x>>=4;}; return buf;}
char * byte_2_hex(uint8_t x){ strcpy(buf," &00 ");for (uint8_t i=3;x>0;--i) {buf[i]= numbers[x & 0x0F]; x>>=4;}; return buf;}

}
