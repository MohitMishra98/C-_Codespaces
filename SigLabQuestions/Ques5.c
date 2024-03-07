#include <stdio.h>

void main(){
        int a,b,c;
        printf("Enter a number A : ");
        scanf("%d",&a);
        printf("Enter a number B : ");
        scanf("%d",&b);
        printf("Before swapping A is %d and B is %d\n",a,b);
        c = a;
        a = b;
        b = c;
        printf("After swapping A is %d and B is %d",a,b);
}