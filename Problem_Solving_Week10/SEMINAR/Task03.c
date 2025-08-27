#include <stdio.h>

//Declaration of the function
int sumArray (int arr [], int size){
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main (){

int arr1 [] = {2, 3, 12, 56};
int size = sizeof (arr1) / sizeof (arr1 [0]);
printf ("The final sum is: %d", sumArray (arr1, size));

return 0;

}