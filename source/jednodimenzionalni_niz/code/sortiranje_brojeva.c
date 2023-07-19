#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, arr[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        int ind = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[ind])
                ind = j;
        if (ind != i)
        {
            int temp = arr[i];
            arr[i] = arr[ind];
            arr[ind] = temp;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}