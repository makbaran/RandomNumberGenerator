#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("Hello, World!\n");
    printf("Random Number Generator\n");


    scanf("Please enter a number: \n");
    scanf("Please enter the end range: \n");


    int numberRange;
    time_t seconds;
    seconds = time(NULL);
    printf("Random Number Generator starts at %ld\n", seconds);



    return 0;

}
