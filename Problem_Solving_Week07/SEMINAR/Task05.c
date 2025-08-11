#include<stdio.h>
int main(){
double temperatures [5];
float total = 0;
printf("\n");
for (int i = 0; i < 5; i++)
{
    printf("Type the temperature value for position %d: ",i);
    scanf("%lf", &temperatures [i]);
    total = total + temperatures [i];
}

printf("\nThe avarage temperature is: %.2f degrees.\n", total / 5);

return 0;

}