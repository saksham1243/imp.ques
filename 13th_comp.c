/*Program to enter two numbers from the user. 
Make a comparison between two numbers by 
using conditional operator. If the first number 
is greater than the second number, perform 
multiplication otherwise division operation. */

#include <stdio.h>

int main() {
    int num1, num2, result;
    
    printf("Hey there! Let's compare and perform an operation on two numbers!\n");
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    result = (num1 > num2) ? (num1 * num2) : (num1 / num2);
    
    if (num1 > num2) {
        printf("%d * %d = %d\n", num1, num2, result);
    } else {
        printf("%d / %d = %d\n", num1, num2, result);
    }
    
    return 0;
}