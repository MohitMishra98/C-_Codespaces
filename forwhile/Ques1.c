#include<stdio.h>

void main(){
    int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

/*
to print a triangle both loop should be same
since line is variable so print j
since top of triangle is 1 so starting with 1

1
12
123
1234
12345
*/