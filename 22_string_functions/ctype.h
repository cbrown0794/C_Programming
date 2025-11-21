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

char toLower(char c){
    if (isUpper(c)){
        return c + 32;
    }
    else {
        return c;
    }
}

char toUpper(char c){
    if (isLower(c)){
        return c - 32;
    }
    else {
        return c;
    }
}

char reverseCase(char c){
    if (isUpper(c)){
        return toLower(c);
    }
    else if (isLower(c)){
        return toUpper(c);
    }
    else {
        return c;
    }
}