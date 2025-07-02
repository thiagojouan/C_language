#include <stdio.h>

int score;

int main() {

printf ("Enter the score: ");
scanf("%d", &score);

switch (score) {

    case 90 ... 100:
    printf("Your grade is A");
    break;

    case 80 ... 89:
    printf("Your grade is B");
    break;

    case 70 ... 79:
    printf("Your grade is C");
    break;

    case 60 ... 69:
    printf("Your grade is D");
    break;

    case 0 ... 59:
    printf("Your grade is F");
    break;

    default:
    printf("Value not allowed.\n");

}

return 0;
}