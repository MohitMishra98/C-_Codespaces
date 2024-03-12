#include<stdio.h>

void main(){
    int i,j;

    for(i='A';i<='E';i++){ //we can also use ASCII of A 65 and E 69
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}

/*
since triangle is normal so both loop should be of same nature
since line is variable we will print j
since top is starting from A we will initialise the printing variable(here j) from A

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


A
AB
ABC
ABCD
ABCDE
*/