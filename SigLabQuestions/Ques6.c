#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    a%2==0 ? printf("Even number") : printf("Odd number");
}