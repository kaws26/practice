#include <stdio.h>
int main()
{
    // insertion Sort
    int arr[] = {7, 8, 3, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    printf("The Array After sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
}