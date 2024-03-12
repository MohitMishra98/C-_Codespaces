#include<stdio.h>

void main(){
    int i,j;

    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("%d",i);
        }
        printf("\n");
    }
}

/*
since triangle is inverted so both loop should be opposite in nature
since line is constant we will print i
since top is starting from 1 we will initialise the printing variable(here i) from 1

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


11111
2222
333
44
5
*/
