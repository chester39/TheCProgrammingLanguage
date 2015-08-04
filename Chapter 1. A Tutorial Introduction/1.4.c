//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Celsius Fahr\n");
    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%5.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}