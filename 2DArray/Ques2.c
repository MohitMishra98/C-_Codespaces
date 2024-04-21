//WAP to get 9 elements in a 3x3 matrix and print sum of all the elements
#include<stdio.h>

void main(){
    int a[3][3],i,j,sum=0;

    printf("Enter an array : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value for index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements is : %d",sum);
}