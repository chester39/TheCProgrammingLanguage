//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 2nd, 2015
//

#include <stdio.h>

void in_comment()
{
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void echo_quote(int c)
{
    int d;
    putchar(c);
    while ((d = getchar()) != c) {
        putchar(d);
        if (d == '\\')
            putchar(getchar());
    }
    putchar(d);
}

void rcomment(int c)
{
    int d;
    if (c == '/') {
        if ((d = getchar()) == '*')
            in_comment();
        else if (d == '/') {
            putchar(c);
            rcomment(d);
        } else {
            putchar(c);
            putchar(d);
        }
    } else if (c == '\'' || c == '\"')
        echo_quote(c);
    else
        putchar(c);
}

int main(int argc, char *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
        rcomment(c);
    return 0;
}