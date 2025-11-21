#include <stdio.h>


// Split the given 2 digit number into tens and ones;
// returns 0 if the number is 2 digit number and 1 otherwise

int splitDigits(int n, int *tens_ptr, int *ones_ptr);

int sumAndAverage(double d1, double d2, double *sum, double *avg);

int main(void) {
    int a = 15;
    puts("Enter a 2 digit number");
    scanf("%d", &a);
    int tens;
    int ones;
    if (splitDigits(a, &tens, &ones) == 0) {
    printf("Tens is %d, Ones is %d\n", tens, ones);
    }

    double d1 = 0;
    double d2 = 0;
    puts("Enter your first number");
    scanf("%lf", &d1);
    puts("Enter your second number");
    scanf("%lf", &d2);
    double sum;
    double avg;
    sumAndAverage(d1,d2, &sum, &avg);
    printf("Sum is %.2f, Average is %.2f\n", sum, avg);

    return 0;
}


int splitDigits(int n, int *tens_ptr, int *ones_ptr) {
    if (n < 10 || n > 99) {
        printf("Not a 2 digit number\n");
        return 1;
    }

    *tens_ptr = n / 10;
    *ones_ptr = n % 10;

    return 0;
}

int sumAndAverage(double d1, double d2, double *sum, double *avg) {
    *sum = d1 + d2;
    *avg = *sum / 2.0;

    return 0;
}