//Print prime numbers in a range
#include <stdio.h>
int main() {
    int start, end, isPrime;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; ++i) {
        if (i <= 1) continue;
        isPrime = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}