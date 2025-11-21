#include <stdio.h>

#define SIZE 10

int printArray(int *a, int size);

int main(void){
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[SIZE] = {192,168,0,1};

    printf("%p\n", a);

    printArray(a, SIZE);
    printArray(b, SIZE);

    return 0;
}

int printArray(int *a, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int setArrayToZero(int *a, int size){
    for(int i = 0; i < size; i++){
        a[i] = 0;
    }
    return 0;
}