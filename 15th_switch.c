/* Program to enter a character from the user. 
Use switch() case. Structure and print 
appropriate message. Recognise the character 
whether it  is vowel, consonants or symbols. */

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character '%c' is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("The character '%c' is a consonant.\n", ch);
            } else {
                printf("The character '%c' is a symbol.\n", ch);
            }
    }
    
    return 0;
}