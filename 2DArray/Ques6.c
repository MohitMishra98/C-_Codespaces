//WAP to get 9 elements in a 3x3 matrix and print transpose of the matrix
#include<stdio.h>

void main(){
    int a[3][3],i,j;

    printf("Enter an array\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value for index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Transpose of the matrix is : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}