//Find x^n without pow()
#include <stdio.h>
int main() {
    double base, result = 1.0;
    int exp, absoluteExp;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exp);
    absoluteExp = (exp > 0) ? exp : -exp;
    for (int i = 0; i < absoluteExp; i++) {
        result *= base;
    }
    if (exp < 0) {
        result = 1.0 / result;
    }
    printf("Result = %lf\n", result);
    return 0;
}