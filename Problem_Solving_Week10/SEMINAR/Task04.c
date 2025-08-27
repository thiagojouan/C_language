#include <stdio.h>

//Function declaration

void countEvenOdd (int arr [], int size, int *evenCount, int *oddCount){
    *evenCount = 0;
    *oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main (){

    int arr1[] = {2, 5, 1, 6, 8, 9, 15, 22, 65};
    int size = sizeof (arr1) / sizeof (arr1 [0]);
    int evenCount, oddCount;

    countEvenOdd(arr1, size, &evenCount, &oddCount);

    printf("\nEven numbers count is %d and Odd count numbers count is %d", evenCount, oddCount);
    printf("\n__________________");

    return 0;

}