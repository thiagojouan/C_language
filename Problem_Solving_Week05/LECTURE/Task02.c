#include <stdio.h>
int main(){

int row,col;
char symbol;

printf("Type a character: ");
scanf(" %c", &symbol);
printf("Number of rows and collumns: ");
scanf("%d%d", &row, &col);

for (int i=0; i < col; i++){
    
    for (int j = 0; j < row; j++)
    {
        if (i == j)
        {
            printf("X\t");
        }
        else
        {
            printf("%c\t",symbol); //the part "\t" works like a tab when printing
        }
       
    }
    printf ("\n");
}
printf("\nEnd of pattern.");
return 0;
}