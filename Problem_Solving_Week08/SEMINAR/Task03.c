#include <stdio.h>
#include <string.h>
int main(){

char word [100];

printf ("\nType a word: ");
scanf("%s",word);

for (int i = 0; word[i] != '\0'; i++)
{
    printf("%c", word[i]);
}

return 0;

}