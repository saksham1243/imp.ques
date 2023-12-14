/* Program to read a number from the user and 
calculate the factorial of a give number. 
#include <stdio.h> */

int main() {
    int number;
    int factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Sorry, factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        printf("The factorial of %d is: %d\n", number, factorial);
    }
    
    return 0;
}