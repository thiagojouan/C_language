#include<stdio.h>

int main()
{

int num;

printf("Type a number to check: ");
scanf("%d", &num);

if (num % 3 == 0){
    printf("The number %d is multiple of 3.", num);
}else {
    printf("The number %d is NOT multiple of 3.", num);
}

return 0;

}