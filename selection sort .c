#include <stdio.h>

int main() {
    int arr[10], i, j, min_idx, temp;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 9; i++) {
        min_idx = i;
        for(j = i + 1; j < 10; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
