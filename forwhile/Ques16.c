#include<stdio.h>

void main(){
    int i,j;

    for(i='E';i>='A';i--){
        for(j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}

/*
since triangle is inverted so both loop should be of opposite nature
since line is constant we will print i
since top is starting from E we will initialise the printing variable(here i) from E

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


EEEEE
DDDD
CCC
BB
A
*/