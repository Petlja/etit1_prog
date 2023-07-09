#include <stdio.h>

int main(void)
{
    char a = 'a', b = 'A';
    printf("%d %d", a >= b, b >= a);
    return 0;
}