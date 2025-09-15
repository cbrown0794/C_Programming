/*
    Getting a input from the keyboard
    Calculate the perimiter of a square
    */

#include <stdio.h>

int main(void){
    int square_side = 1;

    //get the input
    //print the input
    puts("Enter the side of the square");
    scanf("%d", &square_side); //& - address operator
    
    //Math
    int square_perimeter = square_side * 4;
    printf("The perimeter of a square with the side length %d is %d\n",square_side,square_perimeter);


    return 0;
}