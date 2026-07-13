//Recursive reverse number
#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Reversed number = %d\n", reverseNumber(n, 0));
    return 0;
}