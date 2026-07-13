//Print Armstrong numbers in a range
#include <stdio.h>
int main() {
    int start, end, originalNum, remainder, digits, result;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; ++i) {
        originalNum = i;
        digits = 0;
        result = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }
        originalNum = i;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            int power = 1;
            for(int j = 0; j < digits; j++) {
                power *= remainder;
            }
            result += power;
            originalNum /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}