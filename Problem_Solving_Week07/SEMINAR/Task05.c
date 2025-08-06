#include<stdio.h>
int main(){
double temperatures [5];
float total = 0;

for (int i = 0; i < 5; i++)
{
    printf("Type the temperature value for position %d: ",i);
    scanf("%lf", &temperatures [i]);
    total = total + temperatures [i];
}

printf("The avarage temperature is: %.2f degrees.", total / 5);

return 0;

}