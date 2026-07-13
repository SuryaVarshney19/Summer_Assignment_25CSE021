//Linear Search
#include <stdio.h>
int main() {
    int n, target, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d.\n", target, i);
            found = 1;
            break; 
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}