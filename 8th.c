/*Program to read a and b values from the user 
and swap those two numbers by using Call by 
value method.*/

#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", b, a);
    
    return 0;
}