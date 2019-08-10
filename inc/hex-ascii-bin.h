#ifndef HEX_ASCII_BIN
# define HEX_ASCII_BIN
# include "mylib.h"

typedef struct s_flags {
    int hex;
    int bin;
    int ascii;

    int big_end;
} t_flags;

// convert.c
void hex_bin(char *input, int left_to_right, int big_end);
void bin_ascii(char *input, int left_to_right, int big_end);
void hex_ascii(char *input, int left_to_right, int big_end);

// main.c
t_flags set_flags(char *s);
void router(t_flags from, t_flags to, char *input);

//helpers.c
void display_usage(void);
#endif 