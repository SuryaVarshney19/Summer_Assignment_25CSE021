//Find LCM of two numbers
#include <stdio.h>
int main() {
    int a, b, num1, num2, remainder, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    gcd = num1;
    lcm = (a * b) / gcd;
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}