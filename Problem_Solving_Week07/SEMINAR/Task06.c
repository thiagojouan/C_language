#include<stdio.h>
int main(){

    char expID [5];
    float results [5];

    for (int i = 0; i < 5; i++)
{
    printf("\nType the Experiment ID for position %d: ",i);
    scanf(" %c", &expID[i]);
    printf("Type the RESULT for the Exp ID (%c): ",expID[i]);
    scanf("%f", &results[i]);
}
    for (int j = 0; j < 5; j++)
    {
        printf("\nThe result of Experiment (%c) is: %.2f", expID[j],results[j]);
    }
    
return 0;

}