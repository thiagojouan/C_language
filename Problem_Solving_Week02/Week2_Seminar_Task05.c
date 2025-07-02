#include <stdio.h>

int main() {

int speed;
int speed_limit = 70;

printf ("Type the speed: ");
scanf ("%d", &speed);
                            
if (speed <= speed_limit) {
    printf ("Please, continue to drive safely.");
} else if (speed > speed_limit) {
    printf ("Your speed is %d and the speed limit is %d. You are speeding. Ticket for you.", speed, speed_limit);
}

return 0;
}