#include <stdio.h>

int factor (int n){

if (n == 0 || n == 1){
    return 1;
}
return n * factor (n - 1);
}

int main (){
    int n;
    printf ("\nType a number to calculate the factorial: ");
    scanf ("%d", &n);

    printf ("The factorial of %d is %d.", n, factor (n));
    printf("\n______________");

    return 0;

}