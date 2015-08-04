//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    int c, lastc;
    lastc = 'a';
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        else if (lastc != ' ')
            putchar(c);
        lastc = c;
    }
    return 0;
}