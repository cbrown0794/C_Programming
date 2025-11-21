#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }
    FILE *source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Error opening source file %s\n", argv[1]);
        return 1;
    }
    //check if destination file exists, if so, asks user if they want to overwrite or cancel

    FILE *destination = fopen(argv[2], "w");
    if (destination == NULL) {
        printf("Error opening destination file %s\n", argv[2]);
        fclose(source);
        return 1;
    }
    if (destination != NULL) {
        char cha;
        printf("Do you want to write over %s\n", argv[2]);
        scanf(" %c", &cha);
        if (cha == 'y' || cha == 'Y') {
            destination = fopen(argv[2], "w");
        } else {
            printf("Operation cancelled.\n");
            fclose(source);
            return 0;
    }

    //read the characters from source file and write to destination file
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    return 0;
    }}