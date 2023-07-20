#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[] = { 3, 6, 8, 12, 8, 9, 7, 8 }, num, ind = -1;
    int n = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
        if (arr[i] == num)
        {
            ind = i;
            printf("%d ", ind);
        }
    if (ind == -1)
        printf("%d", ind);
    return 0;
}