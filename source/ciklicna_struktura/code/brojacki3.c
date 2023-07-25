#include <stdio.h>

int main(void)
{
    int i = 0;
    for (;;)
        if (i < 10)
        {
            printf("%d ", i);
            i++;
        }
        else
            break;
    return 0;
}