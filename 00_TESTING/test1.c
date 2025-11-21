#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int seed;
    int min, max, n, i, rand_num, sum = 0;

    // Input
    printf("Enter random number seed (unsigned integer): ");
    scanf("%u", &seed);
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value: ");
    scanf("%d", &max);
    printf("Enter number of random numbers to generate: ");
    scanf("%d", &n);

    if (min > max || n <= 0) {
        printf("Invalid input: min should be <= max and n > 0.\n");
        return 1;
    }

    srand(seed);

    printf("-------------\n");
    printf("| Seq | Rand |\n");
    printf("-------------\n");
    for (i = 1; i <= n; i++) {
        rand_num = min + rand() % (max - min + 1);
        printf("| %-5.3d|%5d |", i, rand_num);
        printf("\n");
        sum += rand_num;
    }
    printf("-------------\n");
    printf("Sum = %d\n", sum);
    return 0;
}
