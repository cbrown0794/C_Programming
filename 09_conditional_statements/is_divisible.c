#include <stdio.h>
#include <stdbool.h>

bool is_divisible_both(int first, int second);
bool is_correct_input( int first, int second);

int main(void){
    puts("Enter x and y");
    int x = 0;
    scanf("%d", &x);
    int y = 0;
    scanf("%d", &y);
    // printf("%d\n", is_divisible_both(12,6));
    // printf("%d\n", is_divisible_both(12,4));
    // printf("%d\n", is_divisible_both(15,5));
    if (is_correct_input(x,y)){
        printf("%d\n", is_divisible_both(x,y));
    }   else {
        printf("Incorrect Input");
    }

    return 0;
}

bool is_divisible_both(int first, int second) {
    // if (first % second == 0 && first % (second - 3) == 0){
    //     return true;
    // } else {
    //     return false;
    // }
    return (first % second == 0 && first % (second - 3) == 0);
}

bool is_correct_input( int first, int second){
    return (second != 0 || second != 3);
}