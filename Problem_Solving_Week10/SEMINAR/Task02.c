#include <stdio.h>

//Declaration of the function
int FindMAX (int a, int b, int c){
    if (a >= b && a >= c){
        return a;
        } else if (b >= a && b>= c)
        {
            return b;
        } else {
            return c;
            }
        }

int main(){
    int num1, num2, num3;
    printf ("\nType first number: ");
    scanf ("%d", &num1);
    printf ("Type first number: ");
    scanf ("%d", &num2);
    printf ("Type first number: ");
    scanf ("%d", &num3);
    printf ("\nThe maximum number is: %d", FindMAX (num1, num2, num3));

    return 0;
}