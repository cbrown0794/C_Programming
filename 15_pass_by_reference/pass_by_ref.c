#include <stdio.h>

void setToZero(int *a_ptr);

int main(void) {
    int a = 10;
    printf("a before %d\n", a);
    setToZero(&a);
    printf("a after %d\n", a);



    return 0;
}

void setToZero(int *a_ptr) {
    *a_ptr = 0;
    printf("n is %d\n", *a_ptr);
}