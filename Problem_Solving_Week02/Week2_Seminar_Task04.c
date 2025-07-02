#include <stdio.h>

int main() {

int age;

printf ("How old are you: ");
scanf ("%d", &age);
                            
if (age < 18) {
    printf ("You are too YONG to buy alcohol.");
} else {
    printf ("You are OLD ENOUGH to buy alcohol.");
} 

return 0;
}