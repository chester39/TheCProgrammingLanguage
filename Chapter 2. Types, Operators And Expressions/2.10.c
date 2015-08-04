//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

int main(int argc, char *argv[])
{
    int a = 'A';
    printf("a = %c\nnew a = %c\n", a, lower(a));
    return 0;
}