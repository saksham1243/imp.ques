/*Program to create a calculator, take x, y values 
from the user to perform the mathematical 
operation for both x and y values according to 
the users choice.*/
#include <stdio.h>

int main() {
    float x, y, result;
    int choice;
    
    printf("Hey there! Let's perform some calculations!\n");
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of y: ");
    scanf("%f", &y);
    
    printf("Choose the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            result = x + y;
            printf("The sum of %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 2:
            result = x - y;
            printf("The difference between %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 3:
            result = x * y;
            printf("The product of %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 4:
            if (y != 0) {
                result = x / y;
                printf("The division of %.2f by %.2f is: %.2f\n", x, y, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("Invalid choice! Please choose a number between 1 and 4.\n");
            break;
    }
    
    return 0;
}