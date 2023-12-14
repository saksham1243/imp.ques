/*Write a program to calculate the total interest 
based on the following condition 
Principle amount (Rs.)      
Rate of interest (Rs.) 
>=10000                             
>=8000&&<=9999              
< 8000                
  20% 
  18% 
16% 
Ask user to Enter loan Amount and tenure   
Print the loan amount taken, tenure to clear   
the loan amount, rate of interest and print   
interest amount */

#include <stdio.h>

int main() {
    float principleAmount, rateOfInterest, interestAmount;
    int tenure;
    
    printf("Enter the loan amount: ");
    scanf("%f", &principleAmount);
    
    printf("Enter the tenure (in years): ");
    scanf("%d", &tenure);
    
    if (principleAmount >= 10000) {
        rateOfInterest = 0.2;
    } else if (principleAmount >= 8000 && principleAmount <= 9999) {
        rateOfInterest = 0.18;
    } else {
        rateOfInterest = 0.16;
    }
    
    interestAmount = principleAmount * rateOfInterest * tenure;
  
    printf("Rate of interest: %.2f%%\n", rateOfInterest * 100);
    printf("Interest amount: Rs. %.2f\n", interestAmount);
    
    return 0;
}