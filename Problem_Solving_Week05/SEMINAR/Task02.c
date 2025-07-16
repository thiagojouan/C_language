#include <stdio.h>
int main(){

int i = 0;

while (i<3)
{
    int j = 0;
    while (j<3)
    {
        printf("*\t");
        j++;
    }
    printf("\n");
    i++;
}
return 0;
}