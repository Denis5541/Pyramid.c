#include <stdio.h>

void printNumberPyramid(int rows) {
    int i, j, num = 1;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printNumberPyramid(rows);

    return 0;
}
