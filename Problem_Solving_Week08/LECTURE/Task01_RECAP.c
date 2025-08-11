#include<stdio.h>
int main(){

    //Reverse order Array

    int numb [50];
    int val = 5, i = 0;
    
    while (val != -1)
    {
        printf("Enter a number (or -1 to STOP): ");
        scanf("%d", &val);
        numb [i] = val;
        i++;
    }
    
    for (int j = i -2; j >=0; j--)
    {
        printf("%d\t", numb[j]);
    }
    
return 0;

}