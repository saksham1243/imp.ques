/*Program to read any one value for x which is 
more than three digits from the user and print 
the given number in reversed order. */

#include <stdio.h>

int main() {
    int x, reversed = 0, remainder;
    
    printf("Enter a number greater than three digits: ");
    scanf("%d", &x);
    
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }
    
    printf("The reverse of the given number is: %d\n", reversed);
    
    return 0;
}