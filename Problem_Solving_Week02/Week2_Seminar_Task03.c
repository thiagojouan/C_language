#include <stdio.h>

int main() {

int day;
int month;

printf ("Type the DAY: ");
scanf ("%d", &day);
printf ("Type the MONTH: ");
scanf ("%d", &month);
                            
if (day == 1 && month == 4) {
    printf ("It is April Fools day.");
} else {
    printf ("It is NOT April Fools day");
}

return 0;
}