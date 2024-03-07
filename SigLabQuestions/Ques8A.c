#include <stdio.h>

void main()
{
    int a,b,c;
    
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    printf("Enter number 3 : ");
    scanf("%d",&c);
    
    a>=b ? (a>=c ? printf("%d is grater than %d and %d",a,b,c) : printf("%d is grater than %d and %d",c,b,a)) : 
    (b>=c ? printf("%d is grater than %d and %d",b,a,c) : printf("%d is grater than %d and %d",c,b,a));
    
}