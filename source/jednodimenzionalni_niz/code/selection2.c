#include <stdio.h>

int main(void)
{
    int arr[] = { 5, 2, 4, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}