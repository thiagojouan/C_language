#include<stdio.h>

int main(){
int numbers [] = {3, 7, 2, 9, -1};
int index = 0;
while (numbers [index] != -1)
{
    printf ("%d, ",numbers[index]);
    index ++;
}

return 0;

}