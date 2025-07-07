#include <stdio.h>


int main() {

int coin = 1;
int i = 0;

while (i<5)
{
    coin+=10;
    i++;
    printf("Into minute %d yo have %d coins.\n",i,coin);
}

printf("You have %d coins after %d minutes.",coin,i);

}
