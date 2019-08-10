#include "hex-ascii-bin.h"

void hex_bin(char *input, int left_to_right, int big_end){
    if (left_to_right){
        if (big_end)
            write(1, "Binary_BigEnd", 14);
        else
            write(1, "Binary_LittleEnd", 17);
    }
    else{
        if (big_end)
            write(1, "Hex_BigEnd", 11);
        else
            write(1, "Hex_LittleEnd", 14);
    }
}
void bin_ascii(char *input, int left_to_right, int big_end){
    if (left_to_right){
        if (big_end)
            write(1, "Ascii_BigEnd\n", 14);
        else
            write(1, "Ascii_LittleEnd\n", 17);
    }
    else{
        if (big_end)
            write(1, "Bin_BigEnd\n", 12);
        else
            write(1, "Bin_LittleEnd\n", 15);
    }   
}
void hex_ascii(char *input, int left_to_right, int big_end){
    if (left_to_right){
        if (big_end)
            write(1, "Ascii_BigEnd\n", 14);
        else
            write(1, "Ascii_LittleEnd\n", 17);
    }
    else{
        if (big_end)
            write(1, "Hex_BigEnd\n", 12);
        else
            write(1, "Hex_LittleEnd\n", 15);
    } 
}
