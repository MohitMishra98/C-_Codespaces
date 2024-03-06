//WAP to get a number from user and check it is armstrong number or not

//An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
//For example, consider the number 153. It has 3 digits, and if we cube each digit and then sum them, we get the number itself:
//1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include<stdio.h>

void main(){
    int a=0,n,r,b,sum=0,temp,rnd;

    printf("Enter a number : ");
    scanf("%d",&n);


    b=n;

    //loop to get numbers of digits
    while(n!=0){
        r=n%10;
        n=n/10;
        a++;
    }

    //reset the variable values
    r=0;
    n=b;

    //loop to calculate (sum of ((individual digits)^number of digits))
    while(n!=0){
        r=n%10;
        temp=getpow(r,a);
        sum=sum+temp;
        n=n/10;
    }

    //printf("%d",sum);

    if(b==sum){
        printf("%d is a armstrong number",b);
    }
    else {
        printf("%d is not a armstrong number",b);
    }
}

//function to get power of a number
int getpow(int s,int k){
    int rnd=1,num=1;
    while(rnd<=k){
        num = num*s;
        rnd++;
    }
    return num;
}

/*
1.get the number from user
2.check the number of digits
3.extract all the digits
4.add all the numbers to the power of number of digits
5.if original number is same as the new number then it is armstrong number
*/