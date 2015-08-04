//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 2nd, 2015
//

#include <stdio.h>

int brace, brack, paren;

void search(int c)
{
    if (c == '{')
        ++brace;
    else if (c == '}')
        --brace;
    else if (c == '[')
        ++brack;
    else if (c == ']')
        --brack;
    else if (c == '(')
        ++paren;
    else if (c == ')')
        --paren;
}

void in_comment(void)
{
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void in_quote(int c)
{
    int d;
    while ((d = getchar()) != c)
        if (d == '\\')
            getchar();
}

int main(int argc, char *argv[])
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '/') {
            if ((c = getchar()) == '*')
                in_comment();
            else
                search(c);
        } else if (c == '\'' || c == '"')
            in_quote(c);
        else
            search(c);
        if (brace < 0) {
            printf("Not matched braces\n");
            brace = 0;
        } else if (brack < 0) {
            printf("Not matched brackets\n");
            brack = 0;
        } else if (paren < 0) {
            printf("Not matched parentheses\n");
            paren = 0;
        }
    }
    if (brace > 0)
        printf("Not matched braces\n");
    if (brack > 0)
        printf("Not matched brackets\n");
    if (paren > 0)
        printf("Not matched parentheses\n");
    return 0;
}