#include <stdio.h>

int main(void) {
int numCoins;
int numNickel = numCoins%25/10;
printf("Please state number of coins: \n");
scanf("%d", &numCoins);
printf("Number of Quarters\n");
printf("%d\n",numCoins/25);
printf("Number of Dimes: \n");
printf("%d\n",numCoins%25/10);
printf("Number of Nickels: \n");
printf("%d\n",numCoins%10/5);
printf("Number of Pennies: \n"
);
printf("%d\n", numCoins%5);
}
