#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (; number != 0; number /= 10) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
