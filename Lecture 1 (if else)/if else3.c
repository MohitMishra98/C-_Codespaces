#include<stdio.h>

//WAP to to get a no from use and print same in words

void main() {
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    if(a == 1) {
        printf("1");
    }
    else if(a == 2) {
        printf("2");
    }
    else if(a == 3) {
        printf("3");
    }
    else if(a == 4) {
        printf("4");
    }
    else if(a == 5) {
        printf("5");
    }
    else{
        printf("Invalid Number");
    }
}