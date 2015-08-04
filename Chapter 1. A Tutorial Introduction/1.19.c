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

void reverse(char s[])
{
    int i = 0, j = 0;
    char temp;
    while (s[i] != '\0')
        ++i;
    --i;
    if (s[i] == '\n')
        --i;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}

int main(int argc, char *argv[])
{
    char line[MAXLINE];
    while (myGetline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}