//string functions


int mystrlen(const char* str);
char* get_string(const char* prompt);


int mystrlen(const char* str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}


char* get_string(const char* prompt){
    printf("%s", prompt);
}