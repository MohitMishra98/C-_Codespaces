//WAP to print following series
//(E) 1/1 + 2/4 + 3/9 + 4/16 + 5/25 + 6/36 + 7/49 + 8/64 + 9/81 + 10/100

#include<stdio.h>

void main(){
    int i=1;
    while(i<=10){
        printf("%d/%d ",i,i*i);
        if(i==10){break;}
        printf("+ ");
        i++;
    }
}