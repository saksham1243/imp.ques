/*Program to read three variable x, y and z. Use 
conditional statements and evaluate values of 
variables a, b and c. Perform the sum with two 
sets of variables. Check the sum for equality 
and print different messages */
#include <stdio.h>

int main() {
    int x, y, z;
    int a, b, c;
    
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    printf("Enter the value of z: ");
    scanf("%d", &z);
    
    a = x + y;
    b = y + z;
    c = x + z;
    
    if (a == b && b == c) {
        printf("The sums are all equal!\n");
    } else if (a == b) {
        printf("The sum of x and y is equal to the sum of y and z.\n");
    } else if (b == c) {
        printf("The sum of y and z is equal to the sum of x and z.\n");
    } else if (a == c) {
        printf("The sum of x and y is equal to the sum of x and z.\n");
    } else {
        printf("The sums are all different.\n");
    }
    
    return 0;
}
