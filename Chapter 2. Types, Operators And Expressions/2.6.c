//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}

int main(int argc, char *argv[])
{
    unsigned a = 1251;
    printf("a = %u\nnew a = %u\n", a, setbits(a, 2, 2, 88));
    return 0;
}