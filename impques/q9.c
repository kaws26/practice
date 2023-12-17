// Wap to convert decimal to binary
#include <stdio.h>
void main()
{
    int bin[32];
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 0;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");
}