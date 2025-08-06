#include<stdio.h>
int main(){
double temperatures [] = {23.44,34.55,12.32,77.54,34.99,78.12,77.33};
float total = 0;

for (int i = 0; i < 7; i++)
{
    total = total + temperatures[i];
}

printf("The total value of the temperatures is: %.2f degrees.\n",total);
printf("The avarage temperature is: %.2f degress.", total / 7);

return 0;

}