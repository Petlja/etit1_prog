#include <stdio.h>

int main(void)
{
    int arr[] = { 5, 2, 4, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
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
        printf("%d ", arr[i]);
    return 0;
}