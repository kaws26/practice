#include <stdio.h>
int main()
{
    int arr[] = {7, 8, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    printf("The Array After sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    return 0;
}