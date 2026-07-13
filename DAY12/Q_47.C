//Bubble Sort
#include <stdio.h>
int main() {
    int n, temp, isSwapped;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        isSwapped = 0; 
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwapped = 1;
            }
        }
        if(isSwapped == 0) {
            break; 
        }
    }
    printf("Sorted array (Bubble Sort): ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}