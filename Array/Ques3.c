//WAP to get 10 elements in an array and print all the elements in seperate line in reverse order
//with random value error
#include<stdio.h>

void main(){
    int a[10],i;

    printf("Enter 10 values\n");

    for(i=0;i<10;i++){
        printf("Enter value for index %d : ",i);
        scanf("%d",&a[i]);
    }

    printf("values in reverse order : \n");

    for(i=10;i>=0;i--){
        printf("%d\n",a[i]);
    }
}

//value for index 10 does not exist so it will print a random value