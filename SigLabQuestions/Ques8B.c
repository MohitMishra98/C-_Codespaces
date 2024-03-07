#include <stdio.h>

void main(){
    int a,b,c;
    
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    printf("Enter number 3 : ");
    scanf("%d",&c);
    
    a = a>=b ? (a>=c ? a : c) : (b>=c ? b : c);
    
    printf("Greatest number is %d",a);
}