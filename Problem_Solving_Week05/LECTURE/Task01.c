#include <stdio.h>
int main(){

int numb;
char symbol;

printf("Type a character: ");
scanf(" %c", &symbol);
printf("Number of repetitions: ");
scanf("%d", &numb);

for (int i=0; i<numb; i++){
    printf("%c\t",symbol); //the part "\t" works like a tab when printing 
}
printf("\nEnd of pattern.");
return 0;
}