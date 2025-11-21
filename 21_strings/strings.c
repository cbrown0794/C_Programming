#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#define SIZE 100


bool isUpper(char c);
bool isLower(char c);

bool isAlpha(char c);
bool isDigit(char c);
bool isAlNum(char c);

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



    return 0;
}

bool isUpper(char c){
    if (c >= 'A' && c <= 'Z'){
        return true;
    }
    else {
        return false;
    }
}   

bool isLower(char c){
    if (c >= 'a' && c <= 'z'){
        return true;
    }
    else {
        return false;
    }
}

bool isAlpha(char c){
    if (isUpper(c) || isLower(c)){
        return true;
    }
    else {
        return false;
    }
}  

bool isDigit(char c){
    if (c >= '0' && c <= '9'){
        return true;
    }
    else {
        return false;
    }
}

bool isAlNum(char c){
    if (isAlpha(c) || isDigit(c)){
        return true;
    }
    else {
        return false;
    }
}