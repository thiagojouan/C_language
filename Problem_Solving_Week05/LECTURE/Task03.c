#include <stdio.h>
int main(){

int timesTable = 1, timer = 1;
printf("\n");

while (timesTable <=10)
{
    printf("Times table for %d \n", timesTable);
    timer = 1;

    while (timer <=10)
    {
        printf("%d X %d = %d\n", timesTable, timer, timer*timesTable);
        timer++;
    }
    printf("\n");
    timesTable++;
}
return 0;
}