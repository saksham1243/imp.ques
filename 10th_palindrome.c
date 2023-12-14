/*Program to read a string from the user and 
check whether a given string is a palindrome 
or not. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    
    for (i = 0, j = length - 1; i < length / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}