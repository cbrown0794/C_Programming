#include <stdio.h>

#define ROW 5
#define COL 5

void printArray(int rows, int cols, double arr[rows][cols]);
//Create a function that calculates the sum of all the elements in a specified column in 2D array
double sumOfColumn(int rows, int cols, double arr[rows][cols], int colIndex);
/*
Create a string of 6 characters.
• Assign each characters with the sum of each column of the array.
• For example, the first character is the sum of all the elements in the first
column.
• Don’t forget to assign the last character with a null character.
*/


int main(void){
    double arr[ROW][COL] = {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0},
        {16.0, 17.0, 18.0, 19.0, 20.0},
        {21.0, 22.0, 23.0, 24.0, 25.0}
    };

    // Print the original array
    printArray(ROW, COL, arr);

    // Change the values of specific elements
    arr[0][1] = 24;
    arr[2][2] = 43;

    printArray(ROW, COL, arr);


    // Function to find sum of array
    double sum = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sum += arr[i][j];
        }
    }
    // Assign the sum to the the last element of the array
    arr[ROW-1][COL-1] = sum - 350;
    

    printArray(ROW, COL, arr);


    return 0;
}

void printArray(int rows, int cols, double arr[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", arr[i][j]);
        }
        putchar('\n');
    }
}
double sumOfColumn(int rows, int cols, double arr[rows][cols], int colIndex){
    double sum = 0;
    for(int i = 0; i < rows; i++){
        sum += arr[i][colIndex];
    }
    return sum;
}