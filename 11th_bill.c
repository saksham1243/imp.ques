/* Program to calculate energy bill. Read the 
starting and ending meter readings. The 
charges are as follows. 
No.of units     
Consumed rate in Rs. 
>500       
200-500      
100-200      
<100       
4.50 
3.50 
2.50 
1.50*/

#include <stdio.h>

int main() {
    int startReading, endReading, units;
    float rate, billAmount;
    
    printf("Enter the starting meter reading: ");
    scanf("%d", &startReading);
    
    printf("Enter the ending meter reading: ");
    scanf("%d", &endReading);
    
    units = endReading - startReading;
    
    if (units > 500) {
        rate = 4.50;
    } else if (units >= 200 && units <= 500) {
        rate = 3.50;
    } else if (units >= 100 && units < 200) {
        rate = 2.50;
    } else {
        rate = 1.50;
    }
    
    billAmount = units * rate;
    
    printf("The energy bill amount is: %.2f Rs.\n", billAmount);
    
    return 0;
}