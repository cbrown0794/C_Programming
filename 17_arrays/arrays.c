#include <stdio.h>


// symbolic constant
#define SIZE 100

int main(void) {
    //Creat an array
    int arr[SIZE];

    //set the first element with 111
    arr[0] = 111;

    //set the 9th element with 999 
    arr[9] = 999;

    //print the first and last element
    printf("First element: %d\n", arr[0]);
    printf("Last element: %d\n", arr[9]);

    //initialize the rest of the array
    for(int i = 1; i < SIZE; i++) {
        arr[i] = i * 1;
    }

    //reinitialize an attay [10; 100] with a step of 10
    for(int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;
    }

    //print the whole array
    for(int i = 0; i < SIZE; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}