#include<stdio.h>

void main() {
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);

    if(a%400 == 0){
        printf("%d Yes",a);
    } 
    else if(a%100 == 0) {
        printf("%d No",a);
    }
    else if(a%4 == 0){
        printf("%d Yes",a);
    }
    else{
        printf("%d No",a);
    }
}