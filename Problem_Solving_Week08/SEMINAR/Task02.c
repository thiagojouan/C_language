#include <stdio.h>
int main(){

char ch1 = 'X', ch2 = 'Y', temp;

printf("\nCharacters BEFORE swaping are %c and %c", ch1, ch2);

temp = ch1;
ch1 = ch2;
ch2 = temp;

printf("\nCharacters AFTER the swaping are %c and %c", ch1, ch2);

}