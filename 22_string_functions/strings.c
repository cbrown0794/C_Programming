#include <stdio.h>
#include <stdbool.h>
#include "ctype.h"
#include "string.h"

#define SIZE 100


bool isUpper(char c);
bool isLower(char c);
bool isAlpha(char c);
bool isDigit(char c);
bool isAlNum(char c);

//converts the given uppercase character to lowercase
char toLower(char c);
//converts the given lowercase character to uppercase
char toUpper(char c);
// reverse case of character
char reverseCase(char c);

int main(void){
    //create a character
    char ch = 'V';

    //create a boolean variable
    const bool testBool = true;


    //Create a string
    char str[SIZE] = "Hello";


    // //Scan the string
    // scanf("%s", str);

    
    //Get the string with fgets
    fgets(str, SIZE-1, stdin);

    //printf
    puts("Printing with printf:");
    printf("%s\n\n", str);
    printf("String length: %d\n\n", mystrlen(str));
//loop
    puts("Printing with a loop:");
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
        }
    printf("\n\n");


    //print only lowercase letters
    puts("Printing only lowercase letters:");
    for (int i = 0; str[i] != '\0'; i++){
        if (isLower(str[i])){
            printf("%c", str[i]);
        }
    }
    printf("\n\n");

    //print only uppercase letters
    puts("Printing only uppercase letters:");
    for (int i = 0; str[i] != '\0'; i++){
        if (isUpper(str[i])){
            printf("%c", str[i]);
        }
    }
    printf("\n");

    //prints only alpha characters
    puts("Printing only alphabetic characters:");
    for (int i = 0; str[i] != '\0'; i++){
        if (isAlpha(str[i])){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    //prints only alphanumeric characters
    puts("Printing only alphanumeric characters:");
    for (int i = 0; str[i] != '\0'; i++){
        if (isAlNum(str[i])){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    //prints only digit characters
    puts("Printing only digit characters:");
    for (int i = 0; str[i] != '\0'; i++){
        if (isDigit(str[i])){
            printf("%c", str[i]);
        }
    }
    printf("\n");

    puts("printing with reversed case:");
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", reverseCase(str[i]));
    }
    printf("\n");



    return 0;
}

