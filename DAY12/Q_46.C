//Binary Search
#include <stdio.h>
int main() {
    int n, target;
    printf("Enter the number of SORTED elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in ascending order: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int low = 0, high = n - 1, mid;
    int found = -1; 
    while(low <= high) {
        mid = low + (high - low) / 2; 
        if(arr[mid] == target) {
            found = mid;
            break;
        } else if(arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    if(found != -1) 
        printf("Element %d found at index %d.\n", target, found);
    else 
        printf("Element not found in the array.\n");
    return 0;
}