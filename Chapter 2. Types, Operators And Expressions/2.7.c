//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0 << n) << (p + 1 - n));
}

int main(int argc, char *argv[])
{
    unsigned a = 1251;
    printf("a = %u\nnew a = %u\n", a, invert(a, 1, 2));
    return 0;
}