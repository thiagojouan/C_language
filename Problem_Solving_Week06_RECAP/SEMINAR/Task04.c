#include<stdio.h>

int main(){

int i, n, number, sumEven=0, sumOdd=0;

printf("Type how many numbers: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
    printf("Type number (%d): ",i);
    scanf("%d", &number);
    if (number % 2 == 0){
        sumEven = sumEven + number;
    }else{
        sumOdd = sumOdd + number;
    }
}
printf("The sum of EVEN numbers is %d and the sum of ODD numbers is %d",sumEven,sumOdd);
return 0;
}