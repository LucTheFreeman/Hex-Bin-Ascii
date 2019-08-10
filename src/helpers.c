#include "hex-ascii-bin.h"

static const char *usage = "\
Hex-Ascii-Bin is a hexadecimanl, ascii, binary converter. \n\
\n\
Usage:\n\
\n\
Hex-Ascii-Bin takes three arguments: -fromFlag, -toFlag, and inputString.\n\
Hex-Ascii-Bin will then output the outputString in desired format.\n\
\n\
fromFlag describes the format of the input string.\n\
toFlag describes the format of the output string.\n\
\n\
fromFlag and toFlag have 5 Options:\n\
hex_big or hb\n\
hex_lil or hl\n\
bin_big or bb\n\
bin_lil or bl\n\
ascii or a\n\
\n\
big and lil stand for Big-Endian and Little-Endian formats.\n\
\n\
EXAMPLES:\n\
hex-ascii-bin ascii hex_big \"A ok\"\n\
>> 41 20 6F 6B\n\
\n\
hex-ascii-bin hex_big hex_lil \"41 20 6F 6B\"\n\
>> 14 02 F6 B6\n";

void display_usage(void) {
    _putstr(usage);
    exit(-1);
}
