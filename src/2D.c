#include <stdio.h>

int main() {
    int arr[3][3] = {
        {8, 3, 5},
        {1, 9, 2},
        {6, 4, 7}
    };
    int rows = 3, cols = 3;

    // ---------- Traversal ----------
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // ---------- Search ----------
    int key = 9;
    int foundRow = -1, foundCol = -1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                foundRow = i;
                foundCol = j;
            }
        }
    }

    if (foundRow != -1)
        printf("\n%d found at row %d, col %d\n", key, foundRow, foundCol);
    else
        printf("\n%d not found\n", key);

    // ---------- Sort each row ----------
    for (int i = 0; i < rows; i++) {
        for (int a = 0; a < cols - 1; a++) {
            for (int b = 0; b < cols - 1 - a; b++) {
                if (arr[i][b] > arr[i][b + 1]) {
                    int temp = arr[i][b];
                    arr[i][b] = arr[i][b + 1];
                    arr[i][b + 1] = temp;
                }
            }
        }
    }

    printf("\nMatrix after sorting each row:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}