#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[] = { 2, 5, 7, 12, 16, 18, 22, 27, 31, 36 }, num;
    int n = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &num);
    int levo = 0, sredina, desno = n - 1;
    while (levo <= desno) {
        sredina = (levo + desno) / 2;
        if (arr[sredina] == num)
        {
            printf("%d", sredina);
            return 0;
        }
        if (arr[sredina] < num)
            levo = sredina + 1;
        else
            desno = sredina + 1;
    }
    printf("-1");
    return 0;
}