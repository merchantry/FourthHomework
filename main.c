#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter the number of lines:\n");
    scanf("%d", &rows);
    while (rows > 26) {
        printf("Number of lines should be less than or equal to 26\n");
        scanf("%d", &rows);
    }
    char first = 'A';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows + i; j++) {
            if (j < rows - i - 1) {
                printf(" ");
            }
            else if (j >= rows) {
                printf("%c", first + (i - (j + 1 - rows)));
            }
            else {
                printf("%c", first + (i - (rows - 1 - j)));
            }
        }
        printf("\n");
    }
    return 0;
}
