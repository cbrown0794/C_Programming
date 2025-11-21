// String functions
#include <stdlib.h> // malloc
#include <stdio.h> // getchar
#define STR_SIZE 1024
int my_strlen(const char* str);
char* get_string(const char* prompt);
// TODO
void my_strcpy(char *dest, char *src);
int my_strlen(const char* str) {
int i = 0;
while(str[i] != '\0' && i < STR_SIZE) {
i++;
}
return i;
}
char* get_string(const char* prompt) {
printf("%s", prompt);
char *str = (char*) malloc(sizeof(char) * STR_SIZE);
// Scan the string character by character
char input;
int i = 0;
while (i < STR_SIZE - 1 && (input = getchar()) != '\n') {
str[i] = input;
i++;
}
// Add null character at the end
str[i] = '\0';
return str;
}

