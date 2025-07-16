#include <stdio.h>
int main(){

int i = 0;

while (i<3)
{
    int j = 0;
    while (j<1)
    {
        printf("*\t");
        j++;
    }
    i++;
}

return 0;
}