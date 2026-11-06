#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 7};
    int n = 5;

    // ---------- Traversal ----------
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ---------- Linear Search ----------
    int key = 9;
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("%d found at index %d\n", key, found);
    else
        printf("%d not found\n", key);

    // ---------- Bubble Sort ----------
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}