#include <stdio.h>

int main(void) {
    int luck = 10;

    printf("Luck is %d\n", luck);

    luck += 5;


    printf("The adress of luck is %p\n", &luck);

    //<data_type> *pointer_name;

    int *luckPtr; //uninitialized pointer

    //1 Null pointer
    luckPtr = NULL;

    //2 Assign the address of a variable to a pointer
    luckPtr = &luck;

    // access the data through the pointer
    // * - dereference operator
    printf("Dereference luckPtr %d\n", *luckPtr); //indirect access

    //create a double variable named score
    // create a pointer pointing to it
    double score = 15.3;
    double *scorePtr = &score;

    //modify the value of score using scorePtr
    *scorePtr = 20.9;
    printf("Score is %.2f\n", score);
    

    return 0;
}