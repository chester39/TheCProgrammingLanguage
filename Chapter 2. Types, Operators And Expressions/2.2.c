//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

enum boolean {
    NO,
    YES,
};

int main(int argc, char *argv[])
{
    int i = 0, Judge = YES;
    while (Judge == YES) {
        if (i > lim - 1)
            Judge = NO;
        else if ((c = getchar()) == '\n')
            Judge = NO;
        else if (c == EOF)
            Judge = NO;
        else {
            s[i] = c;
            ++i;
        }
    }
    return 0;
}