#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    printf("Enter a number : ");
    scanf("%d",&b);
    
    a>=b ? printf("%d is grater than %d",a,b) : printf("%d is grater than %d",b,a);
}
