#include<stdio.h>
int main(){

    int array2D [3] [3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int j = 0; j < 3; j++){
    
        for (int i = 0; i < 3; i++)
        {
            if (j == 1) {
                printf ("Value of row (%d) and column (%d) is: %d\n", i, j, array2D[i][j]);
            }
        }
    }
return 0;

}