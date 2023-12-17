// Wap to display a welcome message
#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    printf("Enter your Name: ");
    gets(name);
    printf("\nWELCOME!! ");
    puts(name);
}