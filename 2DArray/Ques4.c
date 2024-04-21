//WAP to get 9 elements in a 3x3 matrix and find max valued element
#include<stdio.h>

void main(){
    int a[3][3],i,j,max;

    printf("Enter an array\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value for index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    max = a[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(max<a[i][j]){
                max = a[i][j];
            }
        }
    }

    printf("Max valued element is : %d",max);
}