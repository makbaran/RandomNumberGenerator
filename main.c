#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearCongruentialGenerator(int seed, int min, int max) {
    int randValue;
    int current = seed;

    int a = 1103515245;
    int c = 12345;
    unsigned int m = 2147483648;

    current = (a * current + c) % m;

    randValue = (current % (max - min + 1)) + min;

    return randValue;
}

int main(void) {
    printf("--- Random Number Generator ---\n");

    time_t seconds;
    seconds = time(NULL);

    int min, max;
    printf("Enter min number: ");

    scanf("%d", &min);

    printf("Enter max number: ");

    scanf("%d", &max);

    if ((min < 0) || (max < 0) || (min >= max)) {
        printf("Invalid input. Ensure min and max are non-negative and min is less than max.\n");
        return 1;
    }

    int finalVal = linearCongruentialGenerator(seconds, min, max);

    printf("The random number is: %d\n", finalVal);

    return 0;
}
