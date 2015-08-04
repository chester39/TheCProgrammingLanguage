//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= x - 1)
        ++b;
    return b;
}

int main(int argc, char *argv[])
{
    unsigned a = 1251;
    printf("a = %u\nnew a = %u\n", a, bitcount(a));
    return 0;
}