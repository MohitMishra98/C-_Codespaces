#include<stdio.h>

void main(){
    int i,j,num1=4,num2=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=num1;j++){
            printf(" ");
        }

        num1--;

        for(j=1;j<=2*num2-1;j++){
            printf("*");
        }

        num2++;

        printf("\n");
    }
}