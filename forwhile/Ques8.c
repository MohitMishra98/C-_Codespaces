#include<stdio.h>

void main(){
    int i,j;

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

/*
since triangle is inverted so both loop should be opposite in nature
since line is constant we will print i
since top is starting from 5 we will initialise the printing variable(here i) from 5

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


55555
4444
333
22
1
*/