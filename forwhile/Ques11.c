#include<stdio.h>

void main(){
    int i,j;

    for(i='E';i>='A';i--){
        for(j='E';j>=i;j--){
            printf("%c",j);
        }
        printf("\n");
    }
}

/*
since triangle is normal so both loop should be of same nature
since line is variable we will print j
since top is starting from E we will initialise the printing variable(here j) from E

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


E
ED
EDC
EDCB
EDCBA
*/