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

int htoi(char s[])
{
    int hex, isHex = YES, i = 0, n = 0;
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'X' || s[i] == 'x')
            ++i;
    }
    for ( ; isHex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            hex = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            hex = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hex = s[i] - 'A' + 10;
        else
            isHex = NO;
        if (isHex == YES)
            n = 16 * n + hex;
    }
    return n;
}

int main(int argc, char *argv[])
{
    char s[] = "0x34f";
    char h[] = "0X2A";
    printf("0x34f = %d\n0X2A = %d", htoi(s), htoi(h));
    return 0;
}