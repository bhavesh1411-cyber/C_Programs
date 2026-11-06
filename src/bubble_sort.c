#include <stdio.h>

int main() {
    int arr[4] = {5, 3, 8, 2};

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
           
            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 

   
    printf("Sorted array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
    
}