//Recursive factorial
#include <stdio.h>
unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        printf("Factorial of %d = %llu\n", n, factorial(n));
    }
    return 0;
}