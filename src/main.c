#include "hex-ascii-bin.h"

t_flags set_flags(char *s){

    t_flags f = {0};
    size_t len = _strlen(s);

    //shortened format
    if (len >= 2 && len <= 3){
        switch (s[1]){
            case 'a':
                f.ascii = 1;
                break;
            case 'b':
                f.bin = 1;
                break;
            case 'h':
                f.hex = 1;
                break;
            default:
                display_usage();
        }
        if (len == 2 && s[2] == 'b')
            f.big_end = 1;
    }
    //long format
    else if (len>=5 && len <=7){
        display_usage();
    }
    //invalid
    else
        display_usage();
    return f;
}

void router(t_flags from, t_flags to, char *input){
    if ((from.bin && to.hex) | (from.hex && to.bin))
        hex_bin(input, from.hex, to.big_end);
    if ((from.bin && to.ascii) | (from.ascii && to.bin))
        bin_ascii(input, from.bin, to.big_end);
    if ((from.hex && to.ascii) | (from.ascii && to.hex))
        hex_ascii(input, from.hex, to.big_end);
}

int main(int argc, char **argv) {
    if (argc != 4)
        display_usage();
    else {
        t_flags from = set_flags(argv[1]);
        t_flags to = set_flags(argv[2]);
        router(from, to, argv[3]);
    }
    return (0);
}
