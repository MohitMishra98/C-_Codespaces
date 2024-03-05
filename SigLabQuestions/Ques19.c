//WAP to get a number from user and check it is palindrome number or not

#include<stdio.h>

void main(){
    int n,r,temp,sum=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    temp = n;

    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    if(temp==sum){
        printf("Number %d is palindrome number",sum);
    }
    else {
        printf("Number %d is not palindrome number",sum);
    }
}