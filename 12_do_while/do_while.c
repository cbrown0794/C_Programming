#include <stdio.h>

int main(void){
    char input;
    int number;

    do {
    printf("Enter an uppercase character: ");
    scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("%c\n", input);


    do {
    printf("Enter an positive integer: ");
    scanf(" %d", &number);
    } while (number <= 0);
    
    printf("%d\n", number);


    


    return 0;
}