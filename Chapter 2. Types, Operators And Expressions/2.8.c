//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

unsigned rightrot(unsigned x, int n)
{
    while (n > 0) {
        if ((x & 1) == 1)
            x = (x >> 1) | ~(~0 >> 1);
        else
            x = (x >> 1);
        --n;
    }
    return x;
}

int main(int argc, char *argv[])
{
    unsigned a = 1251;
    printf("a = %u\nnew a = %u\n", a, rightrot(a, 1));
    return 0;
}