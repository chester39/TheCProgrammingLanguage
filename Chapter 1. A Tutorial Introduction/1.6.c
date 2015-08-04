//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;
    while (c = getchar() != EOF)
        putchar(c);
    printf("At EOF c is %d", c);
    return 0;
}