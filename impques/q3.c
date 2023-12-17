// Wap to check a number is prime or not
#include <stdio.h>
void main()
{
    int num, flag = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        flag = 1;
    }
    else
    {
        for (int i = 3; i < (num / 2); i++)
        {
            if (i % num == 0)
            {
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("Prime Number! ");
    }
    else
    {
        printf("Not Prime Number");
    }
}