#include <stdio.h>
#include <string.h>

int main(){
int same = 0, dif = 0;

char word1 [50], word2 [50];

printf ("Type word 1: ");
scanf ("%s", word1);
printf ("Type word 2: ");
scanf ("%s", word2);

if (strlen (word1) != strlen (word2))
{
    printf ("The two strings are DIFFERENT--");
    return 1;
}

if (strcmp (word1, word2)== 0)
{
    printf ("Two strings are the SAME.");
} else  {
            printf ("Two strings are DIFFERENT.");
        }

return 0;

}