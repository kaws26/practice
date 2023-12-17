// Wap to find leap year
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not leap year\n");
    }
}