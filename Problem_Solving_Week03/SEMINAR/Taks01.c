#include <stdio.h>

char option;
float val_1, val_2;

int main() {

printf("Type first value: ");
scanf("%f", &val_1);

printf("Type second value: ");
scanf("%f", &val_2);

printf("Choose from the menu:\n - Type + for ADDITION\n - Type - for SUBTRACTION\n - Type * for MULTIPLICATION\n - Type / for DIVISION\n Option: ");
scanf(" %c", &option);

switch (option) {

    case '+': 
    printf("Result of ADDTION is: %.2f", val_1 + val_2);
    break;

    case '-': 
    printf("Result of SUBTRACTION is: %.2f", val_1 - val_2);
    break;

    case '*': 
    printf("Result of ADDTION is: %.2f", val_1 * val_2);
    break;
    
    case '/': 
    if (val_2 != 0) {
    printf("Result of ADDTION is: %.2f", val_1 / val_2);
    break;
    } else {
        printf ("Division by zero. Second value can not be zero.\n");
        break;
    }
    
    default:
    printf("No such option on the Menu. Please, try again.\n");

}
return 0;
}