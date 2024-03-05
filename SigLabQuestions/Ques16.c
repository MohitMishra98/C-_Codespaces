//WAP to get a number from a user and calculate its factorial

void main(){
    int i=1,a,b=1;

    //while making a loop used for multiplications numbers declare a variable starting with 1
    //as 1*n=n

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a==0){printf("Factorial of %d is 0");}

    while(i<=a){
        b = b*i;
        //multiply current number with factorial of last number
        i++;
    }

    printf("Factorial of %d is %d",a,b);
}

/*
1   1
2   2
3   6
4   24
5   120
6   720
7   5040
8   40320
9   362880
10  3628800
*/