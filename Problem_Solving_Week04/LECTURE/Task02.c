#include<stdio.h>
int main(){
    int opt=1;

    while (opt!=3)
    {
        printf("Menu:\n1 - ONE;\n2 - TWO;\n3 - EXIT;\n\nType it here: ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            printf("Your are ONE.\n");
            break;
        case 2:
            printf("You are TWO.\n");
            break;
        case 3:
            printf("Goodbye!\n");
            break;
        default:
            printf("No such option.\n");
            break;
        }
    }
    
}

