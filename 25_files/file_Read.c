#include <stdio.h>



int main(void) {
    FILE *file;
    file = fopen("text.txt", "w");

    if (file == NULL) {
        return 1;
    }

    int i;
    while (!feof(file)) {
        fscanf(file, "%d ", &i);
        printf("%4d", i);
    }


    fclose(file);
}