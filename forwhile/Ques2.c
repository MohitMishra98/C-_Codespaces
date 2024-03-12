#include<stdio.h>

void main(){
    int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

/*
to print a triangle both loop should be same
since line is constant print i
since top of triangle is 1 so starting with 1

1
22
333
4444
55555
*/