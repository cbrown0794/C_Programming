#include <stdio.h>

int main() {
	int rows;
    int i;
    int j;
    int num;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for(i = 1; i <= rows; i++) {
		// Print spaces
		for(j = 1; j <= rows - i; j++) {
			printf("  ");
		}

		num = i;
		for(j = 1; j <= 2 * i - 1; j++) {
			printf("%d ", num);
			if(j < i)
				num--;
			else
				num++;
		}
		puts("");
	}
	return 0;
}
