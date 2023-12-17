// Wap to check a Number is palindrome or not
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int n = num, rev = 0, remainder = 0;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    if (rev == num)
    {
        printf("Palindrome Number! ");
    }
    else
    {
        printf("Not a Palindrome Number! ");
    }
}