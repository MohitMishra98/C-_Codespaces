#include<stdio.h>

void main(){
    int a[3][3],i,j;

    printf("Enter 9 value\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter values for index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Here isrray : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}