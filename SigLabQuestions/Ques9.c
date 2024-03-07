#include<stdio.h>

void main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if(a==0){
        printf("Neutral");
    }
    else if(a>0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
}