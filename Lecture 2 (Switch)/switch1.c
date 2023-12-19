#include<stdio.h>

//WAP to to get a no from use and print same in words

void main() {
    int a;

    printf("Enter a number here :");
    scanf("%d",&a);

    switch(a) {
        case 1 : printf("One");
            break;
        case 2 : printf("Two");
            break;
        case 3 : printf("Three");
            break;
        case 4 : printf("Four");
            break;
        case 5 : printf("Five");
            break;
        default : printf("Invalid number");
    }
}