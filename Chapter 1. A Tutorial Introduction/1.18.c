//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 1st, 2015
//

#include <stdio.h>

#define MAXLINE 1000

int myGetline(char s[], int lim)
{
    int c, i, j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

int myRemove(char s[])
{
    int i = 0;
    while (s[i] != '\n')
        ++i;
    --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}

int main(int argc, char *argv[])
{
    char line[MAXLINE];
    while (myGetline(line, MAXLINE) > 0)
        if (myRemove(line) > 0)
            printf("%s", line);
    return 0;
}