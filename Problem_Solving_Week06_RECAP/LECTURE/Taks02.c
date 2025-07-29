#include <stdio.h>
int main(){
int start, end;
int timer = 1;
printf("Type the start number: ");
scanf("%d",&start);
printf("Type the end number: ");
scanf("%d",&end);

//Input validation: this code needs to be added of something to avoid variable end is lower than start 

while (start <= end)
{
    printf("Times table for %d \n", start);
    timer = 1;

    while (timer <=10)
    {
        printf("%d X %d = %d\n", start, timer, timer*start);
        timer++;
    }
    printf("\n");
    start++;
}
return 0;
}