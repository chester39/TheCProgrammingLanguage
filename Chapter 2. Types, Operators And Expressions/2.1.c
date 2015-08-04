//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    printf("Signed char min = %d\n", SCHAR_MIN);
    printf("Signed char max = %d\n", SCHAR_MAX);
    printf("Unsigned char max = %u\n", UCHAR_MAX);
    printf("Signed short min = %d\n", SHRT_MIN);
    printf("Signed short max = %d\n", SHRT_MAX);
    printf("Unsigned short max = %u\n", USHRT_MAX);
    printf("Signed int min = %d\n", INT_MIN);
    printf("Signed int max = %d\n", INT_MAX);
    printf("Unsigned int max = %u\n", UINT_MAX);
    printf("Signed long min = %ld\n", LONG_MIN);
    printf("Signed long max = %ld\n", LONG_MAX);
    printf("Unsigned long max = %lu\n", ULONG_MAX);
    return 0;
}