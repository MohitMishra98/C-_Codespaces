#include<stdio.h>

void main(){
    int i,j;

    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}

/*
to print a triangle both loop should be same
since line is variable so print j
since top of triangle is 5 so starting with 

if starting with 5 outer loop sign > updation --
since triangle is vertical so both loop must be of same characterstics


5
54
543
5432
54321
*/