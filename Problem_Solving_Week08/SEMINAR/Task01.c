#include <stdio.h>
int main(){

int num1 = 13, num2 = 23, temp = 0;

printf("\nNumbers BEFORE swaping are %d and %d", num1, num2);

temp = num1;
num1 = num2;
num2 = temp;

printf("\nNumbers AFTER the swaping are %d and %d", num1, num2);

}