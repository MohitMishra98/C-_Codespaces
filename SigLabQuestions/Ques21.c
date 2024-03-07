//WAP to get a number from user and print all its individual digits on seperate line

#include<stdio.h>

void main(){
    int i=1,n,r;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0){
        r=n%10;
        printf("%d\n",r);
        n=n/10;
    }
}