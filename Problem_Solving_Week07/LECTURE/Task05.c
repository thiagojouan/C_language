#include<stdio.h>

int main(){
int size [] = {10, 20, 30, 40};
int length = sizeof (size) / sizeof (size [0]);
printf("%d", length);

return 0;

}