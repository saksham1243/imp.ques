/* Write a program to read gender in a single 
character like 'M', ’m’ or 'F', ‘f’ and print its 
corresponding complete word "Male" or 
"Female" using a switch case statement.*/

#include <stdio.h>

int main() {
    char gender;
    
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    
    switch (gender) {
        case 'M':
        case 'm':
            printf("You are Male.\n");
            break;
        case 'F':
        case 'f':
            printf("You are Female.\n");
            break;
        default:
            printf("Invalid gender.\n");
    }
    
    return 0;
}