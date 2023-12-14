/*Program to check whether the blood donor is 
eligible or not for donating blood. The 
conditions laid down are as under. Use if 
statement.  
• Age should be greater than 18 years but not 
more than 55 years. 
• Weight should be more than 45 kg. */

#include <stdio.h>

int main() {
    int age;
    float weight;
    
    printf("Enter the age of the blood donor: ");
    scanf("%d", &age);
    
    printf("Enter the weight of the blood donor: ");
    scanf("%f", &weight);
    
    if (age > 18 && age <= 55 && weight > 45) {
        printf("The blood donor is eligible for donating blood.\n");
    } else {
        printf("The blood donor is not eligible for donating blood.\n");
    }
    
    return 0;
}