#include <stdio.h>

#define MAX 100 
int main() {
    int m, n, i, j;
    int mat[MAX][MAX];    
    int max_row = -1;      
    int row, col;

    printf("Enter number of rows (m) and columns (n):\n");
    scanf("%d %d", &m, &n);

    printf("Number of elements: %d\n", m * n);

    printf("Enter the matrix elements (only 0s and 1s):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Input Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    row = 0;
    col = n - 1;
    while (row < m && col >= 0) {
        if (mat[row][col] == 1) {
            max_row = row;
            col--;
        } else {
            row++;
        }
    }

    if (max_row != -1) {
        printf("Row with maximum number of 1s: %d\n", max_row + 1); // +1 for 1-based indexing
    } else {
        printf("Not Present\n");
    }

    return 0;
}