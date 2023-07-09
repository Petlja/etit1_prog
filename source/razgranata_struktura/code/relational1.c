#include <stdio.h>

int main(void)
{
    double a = 6.626069E-34, b = 6.62607E-34;
    printf("%d %d", a <= b, b <= a);
    return 0;
}