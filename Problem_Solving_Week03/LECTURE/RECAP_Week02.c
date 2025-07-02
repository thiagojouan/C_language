#include <stdio.h>

int main() {

float price = 100, discount, total;
int num_proc;

printf ("Type the Quantity of Processors: ");
scanf ("%d", &num_proc);

if (num_proc < 0) {
    printf ("Invalid number. Please, try again.");
    return 0;
}

if (num_proc <= 19) {
    discount = 0;
} else if (num_proc > 19 && num_proc <= 99) {
    discount = 0.05;
} else if (num_proc >= 100){
    discount = 0.1;
}

total = num_proc * price * (1-discount);

printf ("Order total: GPD %.2f", total);

return 0;
}