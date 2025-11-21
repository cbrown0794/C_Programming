#include <stdio.h>
#include "string.h"

int main(void){
    //scan 2 strings
    char s1[100];
    char s2[100];
    printf("Enter first string: ");
    get_string(s1);
    printf("Enter second string: ");
    get_string(s2);
    my_strcpy(s1, s2);
    printf("After copying, first string is: %s\n", s1);
    return 0;
}