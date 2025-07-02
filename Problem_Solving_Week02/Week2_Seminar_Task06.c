#include <stdio.h>

int main() {

int speed;
int speed_limit = 70;
int speed_dif = 0;

printf ("Type the speed: ");
scanf ("%d", &speed);

speed_dif = speed - speed_limit;
                            
if (speed <= speed_limit) {
    printf ("Please, continue to drive safely.\n");
} else if (speed > speed_limit && speed_dif <= 10) {
    printf ("Your speed is %d mph and the speed limit is %d mph. You are speeding. Ticket for you.", speed, speed_limit);
} else if (speed > speed_limit && speed_dif > 10) {
    printf ("Your speed is %d mph and the speed limit is %d mph. You are speeding by %d mph. You will get a ticket and may also face court summons.", speed, speed_limit, speed_dif);
}

return 0;
}