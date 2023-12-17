// Wap to accept and determine whether a number is odd or even
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The Number is even!\n ");
    }
    else
    {
        printf("The Number is Odd!\n");
    }
}