#include <stdio.h>

void main(){
    int a,b,c,d,sum;
    long avg;
    printf("Enter marks of sub 1 : ");
    scanf("%d",&a);
    printf("Enter marks of sub 2 : ");
    scanf("%d",&b);
    printf("Enter marks of sub 3 : ");
    scanf("%d",&c);
    printf("Enter marks of sub 4 : ");
    scanf("%d",&d);
    
    sum = a+b+c+d;
    
    printf("Total marks : %d",sum);
    avg = sum/4.0;
    printf("Average Marks : %d",avg);
}