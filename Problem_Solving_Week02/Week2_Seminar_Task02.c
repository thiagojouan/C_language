#include <stdio.h>

int main() {

int age;

printf ("How old are you: ");
scanf ("%d", &age);
                            
if (age == 40) {
    printf ("Hey, we are the same age.");
} else if (age > 40) {
    printf ("You are OLDER than me.");
} else if (age<40) {
    printf ("You are YONGER than me.");
}

return 0;
}