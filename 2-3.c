#include <stdio.h>

#define MAX 100

void rotateMatrix(int n, int mat[MAX][MAX]) {
    int layer, i, temp, first, last;
    for (layer = 0; layer < n / 2; layer++) {
        first = layer;
        last = n - 1 - layer;
        temp = mat[first][first];
        for (i = first; i < last; i++)
            mat[i][first] = mat[i + 1][first];
        for (i = first; i < last; i++)
            mat[last][i] = mat[last][i + 1];
        for (i = last; i > first; i--)
            mat[i][last] = mat[i - 1][last];
        for (i = last; i > first + 1; i--)
            mat[first][i] = mat[first][i - 1];
        mat[first][first + 1] = temp;
    }
}

int main() {
    int n, i, j;
    int mat[MAX][MAX];

    printf("Enter size of matrix (n):\n");
    scanf("%d", &n);

    printf("Number of elements: %d\n", n * n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Original Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    rotateMatrix(n, mat);

    printf("Rotated Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
