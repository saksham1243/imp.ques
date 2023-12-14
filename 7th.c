/*Program to print the Fibonacci sequence using 
for loop.*/

#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Sequence: ");
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    
    return 0;
}
