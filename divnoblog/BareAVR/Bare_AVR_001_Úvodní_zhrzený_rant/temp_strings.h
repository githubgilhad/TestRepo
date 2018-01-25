#ifndef TEMP_STRINGS_H
#define TEMP_STRINGS_H
#include <cstdint>
namespace temp_strings{
char * long_2_hex(uint32_t x);
char * word_2_hex(uint16_t x);
char * byte_2_hex(uint8_t x);

}
#endif
