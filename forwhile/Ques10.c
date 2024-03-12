#include<stdio.h>

void main(){
    int i,j;

    for(i='A';i<='E';i++){
        for(j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}
/*
since triangle is normal so both loop should be of same nature
since line is constant we will print i
since top is starting from A we will initialise the printing variable(here i) from A

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


A
BB
CCC
DDDD
EEEEE
*/