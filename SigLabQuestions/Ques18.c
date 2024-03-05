//WAP to get a number from the user and print reverse of the number

#include<stdio.h>

void main(){
    int n,r;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0){
        r=n%10;
        //taking modulus with 10 gives last digit
        printf("%d",r);
        n=n/10;
        //updation line
        //since "n" is integer type if "n" is 12345 n/10 will be 1234 (1234.5 in int will be 1234)
    }
}