//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[])
{
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }
        else if (state == OUT) {
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
    return 0;
}