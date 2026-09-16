#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    // Input elements into 1D array
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Traverse and sum elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum = %d\n", sum);
    return 0;
}