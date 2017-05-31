#include <iostream>
#include <cstdint>

using namespace std;

char nibble_to_hex(uint8_t nibble){
    char digits[] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    return digits[nibble];
}


void print_in_hex(uint8_t byte){
    cout << nibble_to_hex(byte >> 4) << nibble_to_hex(byte & 0xf);
}


const uint8_t* as_bytes(const void* data){
    return reinterpret_cast <const uint8_t*> (data);
}

void print_in_hex(const void* data, size_t size) {

    const uint8_t* bytes = as_bytes(data);
    for (int i = 0; i < size; i++) {
        print_in_hex(bytes[i]);
        if ((i + 1) % 16 == 0) {cout << '\n';}
        else { cout << ' '; }
    }
}
