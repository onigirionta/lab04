#ifndef UNTITLED_HEX_PRINT_H
#define UNTITLED_HEX_PRINT_H

char nibble_to_hex(uint8_t nibble);

void print_in_hex(uint8_t byte);

const uint8_t* as_bytes(const void* data);

void print_in_hex(const void* data, size_t size);

#endif 
