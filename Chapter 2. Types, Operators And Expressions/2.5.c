//
//  The C Programming Language
//      Brian Kernighan & Dennis Ritchie
//      Chen Chen @ August 4th, 2015
//

#include <stdio.h>

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; ++i)
        for (j = 0; s2[j] != '\0'; ++j)
            if (s1[i] == s2[j])
                return i;
    return -1;
}

int main(int argc, char *argv[])
{
    char s1[] = "absder";
    char s2[] = "sr";
    printf("s1 = %s\ns2 = %s\n", s1, s2);
    printf("any is %d", any(s1, s2));
    return 0;
}