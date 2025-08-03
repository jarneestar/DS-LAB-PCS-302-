#include <stdio.h>

#define MAX 100

void searchInMatrix(int mat[MAX][MAX], int n, int key) {
    int i = 0, j = n - 1;
    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            printf("Present\n");
            return;
        } else if (mat[i][j] > key) {
            j--;
        } else {
            i++;
        }
    }
    printf("Not Present\n");
}

int main() {
    int n, mat[MAX][MAX], key;
    printf("Number of elements: ");
    scanf("%d", &n);
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    printf("Enter key to search: ");
    scanf("%d", &key);
    searchInMatrix(mat, n, key);
    return 0;
}
