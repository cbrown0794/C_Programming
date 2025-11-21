#include <stdio.h>


#define ROW 4
#define COL 4

void print(int rows, int cols, int arr[rows][cols]);
void set_row(int rows, int cols, int arr[rows][cols], int rowNumber, int value);
//TODO
void setMainDiagonal(int size, int arr[size][size], int value);
void setInverseDiagonal(int size, int arr[size][size], int value);

int main(void) {
    int arr[ROW][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("%d\n", arr [1][0]);
    // printf("%d\n", *(arr + 7));

    arr[1][2] = 66;
    printf("%d\n", arr [1][2]);

    //print an array
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    //set the second row with 7s

    for (int j = 0; j < COL; j++) {
        arr[1][j] = 7;
    }

    //print an array
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    for (int j = 0; j < COL; j++) {
        arr[0][j] = 5;
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    //call print function
    print(ROW, COL, arr);



    return 0;
}


void print(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }
}

void set_row(int rows, int cols, int arr[rows][cols], int rowNumber, int value){
    if (rowNumber < 0 || rowNumber >= rows) {
        return; // Invalid row number
    }
    for (int j = 0; j < cols; j++) {
        arr[rowNumber][j] = value;
    }
}

void setMainDiagonal(int size, int arr[size][size], int value){
    for (int i = 0; i < size; i++) {
        arr[i][i] = value;
    }
}

void setInverseDiagonal(int size, int arr[size][size], int value){
    for (int i = 0; i < size; i++) {
        arr[i][size - 1 - i] = value;
    }
}