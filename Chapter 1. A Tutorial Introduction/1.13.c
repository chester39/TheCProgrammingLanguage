//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN  1
#define OUT 0

int main(int argc, char *argv[])
{
    int c, i, nc = 0, state, len, maxvalue, ovflow = 0;
    int wl[MAXWORD];
    state = OUT;
    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (nc > 0) {
                if (nc < MAXWORD)
                    ++wl[nc];
                else
                    ++ovflow;
            }
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else
            ++nc;
    }
    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i)
        if (wl[i] > maxvalue)
            maxvalue = wl[i];
    for (i = 1; i < MAXWORD; ++i) {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        }
        else
            len = 0;
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0)
        printf(“The number of beyond max size %d words is %d\n", MAXWORD, ovflow);
    return 0;
}