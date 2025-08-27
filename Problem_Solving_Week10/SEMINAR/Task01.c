#include <stdio.h>

//Declaration of the function
float CalcInterest (float principal, float rate, float time){
    float interest = (principal * rate * time)/100;
    return interest;
}

int main(){

    //float p1 = 100, r1 = 5, t1 = 2; 
    printf ("The interest is: %.2f", CalcInterest (100, 5, 2)); //It is possible to call a function without declaring variables if you dont need them.
    printf ("\nThe interest is: %.2f", CalcInterest (150, 4, 3));

    return 0;
}
