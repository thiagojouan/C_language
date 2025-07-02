#include <stdio.h>

int option;

int main() {

printf ("Choose from the menu:\n - 1 for RED \n - 2 for BLACK \n - 3 for WHITE\n Option: ");
scanf("%d", &option);

switch (option) {

    //case 1 ... 5: *** serve para um range de numeros ***
    //break;

    case 1: 
    printf("Your colour is RED");
    break;
                                                        
    case 2:
    printf("Your colour is BLACK");
    break;

    case 3:
    printf("Your colour is WHITE");
    break;

    default:
    printf("No such option on the Menu. Please, try again.\n");

}

return 0;
}