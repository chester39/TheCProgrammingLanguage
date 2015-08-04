//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    int space = 0, tab = 0, line = 0, c;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++space;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++line;
    }
    printf("space = %d\ntab = %d\nline = %d", space, tab, line);
    return 0;
}