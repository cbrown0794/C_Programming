/*
practice void functions

*/


#include <stdio.h>


//function prototypes - small description of a function

void two(void);
void one_three(void);


int main(void){
    printf("starting now:\n");
    one_three();
    printf("done:\n");
    return 0;
}

//Function Implementations

void two(void){
    printf("two\n");
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}