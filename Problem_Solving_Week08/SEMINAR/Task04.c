#include <stdio.h>

int main(){

char word1 [4], word2 [4], temp [4];

printf("\n");
printf ("Type word 1 (3 characters): ");
scanf("%s", word1);

printf ("Type word 2 (3 characters): ");
scanf("%s", word2);

printf ("\nTwo words BEFORE swaping are %s and %s.", word1, word2);

for (int i = 0; i < 3; i++)
{
    temp [i] = word1 [i];
    word1 [i] = word2 [i];
    word2 [i] = temp [i];
}

printf ("\nTwo words AFTER swaping are %s and %s.", word1, word2);

return 0;


}