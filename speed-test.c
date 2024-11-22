#include <stdio.h>
#include <time.h>

double speedtest(int renum, int num) {
    int rex = renum;
    clock_t start_time = clock(); // Start the timer

    for (int x = 0; x < num - 1; x++) {
        printf("tring %d\r", x + 1); // Print the progress
        rex *= renum; // Multiply
    }

    clock_t end_time = clock(); // End the timer
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calculate elapsed time
    return elapsed_time;
}

int main() {
    int renum = 2;
    int num = 1 << 20; // Equivalent to 2**20
    double time_taken = speedtest(renum, num);

    printf("\nTime taken: %f seconds\n", time_taken); // Print the elapsed time
    return 0;
}
