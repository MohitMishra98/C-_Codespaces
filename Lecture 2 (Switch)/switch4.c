#include<stdio.h>

//WAP to get a character from user and check it is vowel or consonant (with if else)

void main() {
    char ch;

    printf("Enter a character :");
    scanf("%c",&ch);

    if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
    printf("\n\n");
}