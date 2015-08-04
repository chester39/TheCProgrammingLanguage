//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int c, i, j;
    int a[26];
    for (i = 0; i < 26; ++i)
        a[i] = 0;
    while ((c = getchar()) != EOF) {
        for (i = 'a'; i <= 'z'; ++i)
            if (c == i)
                ++a[i - 97];
    }
    for (i = 0; i < 26; ++i) {
        if (a[i] != 0) {
            printf("%c  ", i + 97);
            for (j = 0; j < a[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
    return 0;
}