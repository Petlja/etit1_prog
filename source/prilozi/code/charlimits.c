#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    printf("      Tip      | B |   Opseg\n");
    printf(" --------------+---+-----------\n");
    printf(" char          | %llu | %hd..%hd\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf(" signed char   | %llu | %hd..%hd\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf(" unsigned char | %llu | 0..%hu\n", sizeof(unsigned char), UCHAR_MAX);
    return 0;
}