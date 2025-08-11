#include<stdio.h>
int main(){

    char name [] = "Thiago Jouan";

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c",name[i]);
    }
    
    //printf("\nEnter your name: ");
    //scanf("%s",name);
    //printf("Your name is: %s", name);

    printf("\nEnter your name: ");
    fgets(name, 50, stdin);
    printf("\nYour name is: %s", name);

return 0;

}