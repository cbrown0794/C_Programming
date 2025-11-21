#include <stdio.h>
#include "string.h"
int main(void) {
// Scan 2 strings
char *s1 = get_string("Enter the first string: ");
char *s2 = get_string("Enter the second string: ");
// Print strings
printf("Before copy\n'%s'\n", s1);
printf("'%s'\n\n", s2);
// Copy s1 to s2
my_strcpy(s2, s1);
printf("After copy\n'%s'\n", s1);
printf("'%s'\n\n", s2);
// Add s1 to s2
my_strcat(s2, s1);
printf("After adding\n'%s'\n", s1);
printf("'%s'\n\n", s2);
return 0;
}
