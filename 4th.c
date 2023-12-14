/*Program to read the values of a, b and c 
through the keyboard. Add them and after 
addition check if it is in the range of 100 and 
200 or not. Print the separate message for 
each.*/
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Enter the value of c: ");
    scanf("%d", &c);
    
    int sum = a + b + c;
    
    if (sum >= 100 && sum <= 200) {
        printf("The sum is in the range of 100 and 200.\n");
    } else {
        printf("The sum is not in the range of 100 and 200.\n");
    }
    
    return 0;
}