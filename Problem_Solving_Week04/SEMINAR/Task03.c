#include<stdio.h>
int main(){
    int state=1;
    int age;    

    while (state==1)
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
    printf("Type 1 to continue and 0 to exit: ");
    scanf("%d",&state);
    }
           
}