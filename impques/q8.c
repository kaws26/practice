// Wap to convert binary to decimal
#include <stdio.h>
void main()
{
    int n, decimal_num = 0, rem = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        decimal_num = decimal_num + rem * base;
        temp = temp / 10;
        base = base * 2;
    }
    printf("The binary number is  %d \n", n);
    printf("The decimal Number is %d\n", decimal_num);
}