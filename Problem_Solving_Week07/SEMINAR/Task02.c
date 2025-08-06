#include<stdio.h>
int main(){

    int index, values [] = {32,12,54,78,39,77};
    printf("CURRENT VALUES\n");
    for (int i = 0; i < 6; i++)
    {
        printf ("The value in the position %d is: %d\n", i,values[i]);
    }
    
    printf ("Type an index (0-5): ");
    scanf ("%d", &index);
    printf("Type a new value for the index %d: ",index);
    scanf("%d", &values[index]);
    printf("UPDATED VALUES\n");
    for (int i = 0; i < 6; i++)
    {
        printf ("The value in the position %d is: %d\n", i,values[i]);
    }
    
return 0;

}