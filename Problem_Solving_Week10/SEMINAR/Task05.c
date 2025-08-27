#include <stdio.h>

int power (int base, int exp){
int result = 1;
for (int i = 0; i < exp; i++)
{
    result *= base;
}

return result;

}

int main (){

    int base1, exp1;

    printf ("\nType the base: ");
    scanf ("%d", &base1);
    printf ("Type the exponent: ");
    scanf ("%d", &exp1);

    printf ("\nThe result is: %d", power (base1, exp1));
    printf ("\n________________");

    return 0;

}