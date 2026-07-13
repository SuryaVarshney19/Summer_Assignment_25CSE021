//Find GCD of two numbers
#include <stdio.h>
int main() {
    int a, b, remainder;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("GCD is: %d\n", a);
    return 0;
}