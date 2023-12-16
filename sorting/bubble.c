#include <stdio.h>

int main()
{
    // bubble sort
    int arr[] = {7, 3, 1, 2, 8};
    int temp; // temporary variable
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j]; // Swapping the elements
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Array After sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    return 0;
}