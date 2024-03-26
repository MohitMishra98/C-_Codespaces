//WAP to get 10 elements in an array and print all elemets on seperate line
#include<stdio.h>

void main(){
    int a[10],i;

    printf("Enter 10 values\n");

    for(i=0;i<10;i++){
        printf("Enter value of %d index : ",i);
        scanf("%d",&a[i]);
    }

    printf("Values that you have entered\n");

    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}