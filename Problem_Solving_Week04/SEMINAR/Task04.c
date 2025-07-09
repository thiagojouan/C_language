#include<stdio.h>
int main(){
    char state='y';
    int age;    

    while (state=='y' || state=='Y')
    {
        printf("Type your age: ");
        scanf("%d",&age);

        switch (age)
        {
        case 0 ... 4:
            printf("No need to pay.\n");
            break;
        
        case 5 ... 64:
            printf("Regular fare applies.\n");
            break;
        case 65 ... 130:
            printf("Discounted fare applies.\n");
            break;
        
        default:
            printf("Please type a valid age.\n");
            break;
        }
    printf("Type Y to continue or N to exit: ");
    scanf(" %c",&state);
    }
           
}