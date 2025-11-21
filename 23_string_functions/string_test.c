#include <stdio.h>
#include <stdbool.h>
#include "ctype.h"
#include "string.h"
#define SIZE 100
int main(void) {
// Get the string with get_string function
char *str = get_string("Enter the string: ");
// Print the string
puts("Printing with printf");
printf("'%s'\n\n", str);
printf("String size: %d\n", my_strlen(str));
// Print only lowercase character from the string
// TODO
puts("Printing lowercase chars");
for (int i = 0; str[i] != '\0'; i++) {
if (isLower(str[i])) {
printf("%c", str[i]);
}
}
printf("\n\n");
puts("Printing in reversed case");
for (int i = 0; str[i] != '\0'; i++) {
if (isLower(str[i])) {
printf("%c", toUpper(str[i]));
}
else {
printf("%c", toLower(str[i]));
}
}
printf("\n\n");
return 0;
}
