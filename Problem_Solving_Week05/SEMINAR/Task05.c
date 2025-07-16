#include <stdio.h>
int main(){

int i=0, j=0,row,col;

printf("Type the number of rows: ");
scanf("%d", &row);
printf("Type the number of columns: ");
scanf("%d", &col);

while (i<row)
{
    while (j<col)
    {
        if (i+1 == j && i != row && j!=col-1){
            printf("X ");
        }
        else {
            printf("* ");
        }
        j++;
    }
    j=0;
    printf("\n");
    i++;
}

return 0;
}