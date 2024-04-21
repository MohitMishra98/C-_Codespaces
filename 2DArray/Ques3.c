#include<stdio.h>

void main(){
    int a[3][3],i,j,min;

    printf("Enter an array\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value for index A%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    min = a[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(min>a[i][j]){
                min = a[i][j];
            }
        }
    }

    printf("Min valued element is : %d",min);
}