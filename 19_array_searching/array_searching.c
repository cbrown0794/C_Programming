#include <stdio.h>

#define SIZE 10

//Return the index of the first zero element in the array
// Return -1 if there are no zeros
int firstZero(int *arr, int size);
int lastZero(int *arr, int size);
int nthZero(int *arr, int size, int n);
//TODO
// Returns the index of the nth target value in the array
int nthTarget(int *arr, int size, int target, int n);

int main(void){
    //create an array
    int my_array[SIZE] = {8, 0, 3, 0, 45, -4};

    if (firstZero(my_array, SIZE) < 0){
        puts("No zeros found");
        return 1;
    }
    else {
        printf("First zero found at index: %d\n", firstZero(my_array, SIZE));
    }

    if (lastZero(my_array, SIZE) < 0){
        puts("No zeros found");
        return 1;
    }
    else {
        printf("Last zero found at index: %d\n", lastZero(my_array, SIZE));
    }

    printf("Enter n for n-th zero search: ");
    int n;
    scanf("%d", &n);
    if (nthZero(my_array, SIZE, n) < 0){
        printf("Less than %d zeros found\n", n);
        return 1;
    }
    else {
        printf("%d-th zero found at index: %d\n", n, nthZero(my_array, SIZE, n));
    }
    return 0;
}


int firstZero(int *arr, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            return i;
        }
    }
    return -1;
}

int lastZero(int *arr, int size){
    for (int i = size - 1; i >= 0; i--){
        if (arr[i] == 0){
            return i;
        }
    }
    return -1;
}

int nthZero(int *arr, int size, int n){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            count++;
            if (count == n){
                return i;
            }
        }
    }
    return -1;
}