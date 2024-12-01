#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("--- Random Number Generator ---\n");

    int firstVal;
    int secondVal;

    time_t seconds;
    seconds = time(NULL);
    
    printf("Input min value: ");

    scanf("%d", firstVal);

    printf("Input max value: ");

    scanf("%d", secondVal);

    
    return 0;
}
