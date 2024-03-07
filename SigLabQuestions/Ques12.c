#include<stdio.h>

void main(){
    char a;
    
    printf("Enter a character : ");
    scanf("%c",&a);
    
    switch(a) {
        case 'a' : printf("Vowel");break;
        case 'e' : printf("Vowel");break;
        case 'i' : printf("Vowel");break;
        case 'o' : printf("Vowel");break;
        case 'u' : printf("Vowel");break;
        default : printf("Consonant");
    }
}