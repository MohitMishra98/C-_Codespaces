#include<stdio.h>

void main() {
    int a,b,c;

    printf("Enter first value here :");
    scanf("%d",&a);

    printf("Enter second value here :");
    scanf("%d",&b);

    c = a+b;
    printf("Sum of %d and %d = %d\n",a,b,c);

    c = a-b;
    printf("Sub of %d and %d = %d\n",a,b,c);

    c = a*b;
    printf("Mul of %d and %d = %d\n",a,b,c);

    c = a/b;
    printf("Div of %d and %d = %d\n",a,b,c);

}