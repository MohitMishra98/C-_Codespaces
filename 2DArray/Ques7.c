//WAP to get 9 elements in each 2 3x3 matrix and print sum of both matrix
#include<stdio.h>

void main(){
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter an matrix\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value of index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter an matrix\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value of index A%d%d : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of matrix is : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}