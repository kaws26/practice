// Wap using bitwise operators
#include <stdio.h>
void main()
{
    int a = 5, b = 2;
    int c=!a;
    printf("%d\n", c);
    printf("%d\n", a & b);
    printf("%d\n", a ^ b);
    printf("%d\n", a | b);
    printf("%d\n", !b);
}