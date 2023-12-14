/*Program to find the total amount when there 
are five notes of Rs. 100, three notes of Rs. 50 
and 20 notes of Rs.20. */

#include <stdio.h>

int main() {
    int num_100_notes = 5;
    int num_50_notes = 3;
    int num_20_notes = 20;
    
    int total_amount = (num_100_notes * 100) + (num_50_notes * 50) + (num_20_notes * 20);
    
    printf("The total amount is Rs. %d\n", total_amount);
    
    return 0;
}