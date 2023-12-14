/*Program to read a number from the users from 
1 to 7 and print it’s corresponding week day. 
if user entered any other number rather than 1 
to 7 print any message accordingly
#include <stdio.h>*/

int main() {
    int number;
    
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &number);
    
    switch(number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Oops! That's not a valid number. Please enter a number from 1 to 7.\n");
            break;
    }
    
    return 0;
}