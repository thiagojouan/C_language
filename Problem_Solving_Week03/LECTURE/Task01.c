#include <stdio.h>

float base, height;
int option;

int main() {

printf ("Choose from the menu:\n - 1: Triangle \n - 2: Rectangle \n Option: ");
scanf("%d", &option);

switch (option) {

case 1: 
printf("Base of the Triangle: ");
scanf("%f", &base);
printf("Height of the Triangle: ");
scanf("%f", &height);
printf("Area of the Triangle is: %.2f", base * height * 0.5);
break;
                                                        
case 2:
printf("Base of the Rectangle: ");
scanf("%f", &base);
printf("Height of the Rectangle: ");
scanf("%f", &height);
printf("Area of the Rectangle is: %.2f", base * height);
break;

default:
printf("No such option on the Menu. Please, try again.\n");
}
return 0;
}
