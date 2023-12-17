// Wap for Fibonacci series
#include<stdio.h>
int Fibonacci(int n)
{
    if (n <=1 )
    {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
    
}
void main()
{
    int n = 10;
    printf("%d", Fibonacci(n));
}