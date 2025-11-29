#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0], second_min = 2147483647;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            second_min = min;
            min = arr[i];
        } else if (arr[i] < second_min && arr[i] != min) {
            second_min = arr[i];
        }
    }
    
    if (second_min == 2147483647) {
        printf("There is no second minimum number\n");
    } else {
        printf("Minimum: %d\n", min);
        printf("2nd Minimum: %d\n", second_min);
    }
    
    free(arr);
    return 0;
}