//Find product of digits
#include <stdio.h>
int main() {
    int n, product = 1, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        product = 0;
    } else {
        if (n < 0) n = -n;
        while (n != 0) {
            remainder = n % 10;
            product *= remainder;
            n /= 10;
        }
    }
    printf("Product of digits = %d\n", product);
    return 0;
}