#include <iostream>
#include <cstdint>
#include "hex_print.h"

using namespace std;


char bit_digit(uint8_t byte,uint8_t bit){
    if(byte & (0x1 << bit)){return '1';}
    return '0';
}


void print_in_binary(uint8_t byte){
    for(int i = 7; i >= 0; i--)
        cout<<bit_digit(byte,i);
}


void print_in_binary(void* data,size_t size) {

    const uint8_t* bytes = as_bytes(data);
    for (int i = 0; i < size; i++) {
        print_in_binary(bytes[i]);
        if ((i + 1) % 4 == 0) { cout << '\n'; }
        else { cout << ' '; }
    }
}