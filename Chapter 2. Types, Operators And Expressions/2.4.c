//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    for (i = k = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j)
            ;
        if (s2[j] == '\0')
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main(int argc, char *argv[])
{
    char s1[] = "absder";
    char s2[] = "sr";
    printf("s1 = %s\ns2 = %s\n", s1, s2);
    squeeze(s1, s2);
    printf("new s1 = %s", s1);
    return 0;
}