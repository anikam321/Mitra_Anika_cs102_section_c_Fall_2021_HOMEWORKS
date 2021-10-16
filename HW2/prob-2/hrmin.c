#include <stdio.h>

int main(void) {
int min;

printf("Enter number of minutes: \n");
scanf("%d", &min);
printf("Number of Hours: \n");
printf("%d hours and %d minutes ", min/60, min%60);

}
