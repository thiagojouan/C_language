#include <stdio.h>

int main(){
int i = 0;
char word [50];

printf ("\nType a word (with no spaces): ");
scanf ("%s", word);

while (word[i] != '\0')
{
    i++;
}

printf("Reverse word is: ");
while (i >= 0)
{
    printf("%c", word[i]);
    i--;
}

return 0;

}