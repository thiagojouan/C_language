#include<stdio.h>
int main(){
    
    double factorial=1;
    int num;
    printf("Type a number to calculate the factorial: ");
    scanf("%d",&num);  

    for (int i=1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %.0f.\n", num, factorial);
    return 0;
}