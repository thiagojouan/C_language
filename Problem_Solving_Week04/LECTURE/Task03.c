#include<stdio.h>
int main(){
    int number=0;
    //int i;

    while (number>10 || number<=0)
    {
        printf("Type a interger number from 1 to 10.\n\nType it here: ");
        scanf("%d",&number);
    }
    
    for (int i = 0; i <= 10; i++)
    {
        //continue; this instruction prevents any other further line to be executed and goes to the next interation of the FOR loop.
        
        printf("%d X %d = %d\n",number,i,number*i);
    }
       
}