#include <stdio.h>



int main(void) {
    FILE *file;
    file = fopen("text.txt", "w");

    if (file == NULL) {
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        fprintf(file, "%d ", (i));
        if (i % 10 == 0) {
            fprintf(file, "%c", '\n');
        }
    }

    fclose(file);
}