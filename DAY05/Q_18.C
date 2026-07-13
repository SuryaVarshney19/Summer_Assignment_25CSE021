//Check strong number
#include <stdio.h>
int main() {
    int n, originalNum, remainder, sum = 0, fact;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    originalNum = n;
    while(originalNum != 0) {
        remainder = originalNum % 10;
        fact = 1;
        for(int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        originalNum /= 10;
    }
    if(sum == n && n > 0)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);
    return 0;
}