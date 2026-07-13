//Find largest prime factor
#include <stdio.h>
int main() {
    long long n, maxPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }
    printf("Largest prime factor is: %lld\n", maxPrime);
    return 0;
}