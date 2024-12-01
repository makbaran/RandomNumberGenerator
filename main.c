#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned int linearCongruentialGenerator(unsigned int seed, unsigned int min, unsigned int max) {

}
int main(void) {
    printf("Random Number Generator\n");

    int numberRange;
    time_t seconds;
    seconds = time(NULL);


    int min, max, seed;
    printf("Enter min number: ");

    scanf("%u", &min);

    printf("Enter max number: ");

    scanf("%u", &max);

    if ((min < 0) || (max < 0) || (seed < 0)) {
        printf("Do not enter a negative number.");
    }
    // printf("Random Number Generator starts at %ld\n", seconds);
     
    // if (seconds == -1) {
    //     printf("The time()Function");
    // }

    return 0;
}
