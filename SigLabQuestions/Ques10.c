#include<stdio.h>

void main() {
    int a;
    
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if(a%400==0){
        printf("Leap year");
        
    } else if(a%100==0){
        printf("Not a leap year");
    } else if(a%4==0){
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }
}