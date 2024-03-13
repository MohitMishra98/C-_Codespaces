#include<stdio.h>

void main(){
    int i,j,num1=1;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",num1);
            num1++;
        }
        printf("\n");
    }
}

/*
since triangle is normal so both loop should be of same nature

comparison operator sign should be opened in + sign direction
comparison operator sign should be opposite to - sign

here 2 for loops is used to  make triangle structure 
num1 is initialised from 1 and incremented by 1 each time any loop runs

1
23
456
78910
1112131415
*/