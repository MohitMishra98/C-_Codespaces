#include<stdio.h>

void main(){
    int i,j;

    for(i='E';i>='A';i--){
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}

/*
since triangle is inverted so both loop should be of opposite nature
since line is variable we will print j
since top is starting from A we will initialise the printing variable(here j) from A

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


ABCDE
ABCD
ABC
AB
A
*/
