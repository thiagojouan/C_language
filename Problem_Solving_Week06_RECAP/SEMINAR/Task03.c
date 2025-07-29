#include <stdio.h>

int main() {

int option;
printf ("Choose a number from 1 to 7: ");
scanf("%d", &option);

switch (option) {

    case 1: 
    printf("The day is SUNDAY");
    break;
                                                        
    case 2:
    printf("The day is MONDAY");
    break;

    case 3:
    printf("The day is TUESDAY");
    break;
    
    case 4:
    printf("The day is WEDNESDAY");
    break;

    case 5:
    printf("The day is THURSDAY");
    break;

    case 6:
    printf("The day is FRIDAY");
    break;

    case 7:
    printf("The day is SATURDAY");
    break;

    default:
    printf("The number typed is invalid. Please try again.");

}
return 0;
}