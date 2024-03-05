//WAP to print summation of first 10 natural numbers

#include<stdio.h>

void main(){
    int i=1,a=0;

    //while making a loop used for adding numbers declare a variable starting with 0
    //as 0+n=n

    while(i<=10){
        a= a+i;
        //adding 
        i++;
    }
    printf("Summation of first %d natural numbers is %d",i-1,a);
}