#include<stdio.h>

//WAP to get number from user and check it is a Positive or Negative Number

void main() {
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    if(a>0){
        printf("%d is a positive number",a);
    }
    else if(a<0){
        printf("%d is a negative number",a);
    }
    else{
        printf("%d is 0",a);
    }
}