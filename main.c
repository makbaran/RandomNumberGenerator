#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("Random Number Generator\n");

    int numberRange;
    time_t seconds;
    seconds = time(NULL);
    printf("%d\n",seconds);
    

    // printf("Random Number Generator starts at %ld\n", seconds);
    
    
    printf("Hello World\n");
    if (seconds == -1) {
        printf("The time()Function");
    }
    return 0;
}
