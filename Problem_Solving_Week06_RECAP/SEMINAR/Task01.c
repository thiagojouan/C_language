#include <stdio.h>

int main(){

int sum = 0, i = 1, num;

printf("Type an integer number: ");
scanf("%d", &num);

while (i <= num)
{
    sum = sum + i;
    i++;
}

printf("The sum of the first %d natural numbers is: %d", num, sum);

}