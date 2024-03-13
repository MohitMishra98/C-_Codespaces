#include<stdio.h>

void main(){
    int i,j;

    for(i='A';i<='E';i++){
        for(j='E';j>=i;j--){
            printf("%c",j);
        }
        printf("\n");
    }
}

/*
since triangle is inverted so both loop should be of opposite nature
since line is variable we will print j
since top is starting from E we will initialise the printing variable(here j) from E

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


EDCBA
EDCB
EDC
ED
E
*/