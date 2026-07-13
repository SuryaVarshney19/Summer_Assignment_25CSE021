//Count set bits in a number
#include <stdio.h>
int main() {
    unsigned int n; 
    int count = 0;
    printf("Enter a positive integer: ");
    scanf("%u", &n);
    while (n > 0) {
        count += (n & 1); 
        n >>= 1;
    }
    printf("Number of set bits (1s): %d\n", count);
    return 0;
}