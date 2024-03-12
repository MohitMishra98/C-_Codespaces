#include<stdio.h>

void main(){
    int i,j;

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}


/*
since triangle is inverted so both loop should be opposite in nature
since line is variable we will print j
since top is starting from 1 we will initialise the printing variable(here j) from 1

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign


12345
1234
123
12
1
*/