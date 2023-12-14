/*Write a program to enter n value from the user 
and read values from 1 to n from the user  and 
count the positive and negative numbers from 
1 to n. Print no.of positive numbers and no. of 
negative numbers among the n numbers.*/

#include <stdio.h>

int main() {
    int n, num, positiveCount = 0, negativeCount = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }
    
    printf("The number of positive numbers among the %d numbers is: %d\n", n, positiveCount);
    printf("The number of negative numbers among the %d numbers is: %d\n", n, negativeCount);
    
    return 0;
}