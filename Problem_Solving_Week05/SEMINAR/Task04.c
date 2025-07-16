#include <stdio.h>
int main(){

int i=0, j=0,row,col=1;

printf("Type the number of rows: ");
scanf("%d", &row);
//printf("Type the number of columns: ");
//scanf("%d", &col);

while (i<row)
{
    while (j<i)
    {
        printf("*\t");
        j++;
    }
    j=0;
    printf("\n");
    i++;
}

return 0;
}