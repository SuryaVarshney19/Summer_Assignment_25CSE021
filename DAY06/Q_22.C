//Convert binary to decimal
#include <stdio.h>
int main() {
    long long n; 
    int decimal = 0, weight = 1, remainder;
    
    printf("Enter a binary number (0s and 1s only): ");
    scanf("%lld", &n);
    
    while (n != 0) {
        remainder = n % 10;
        decimal += remainder * weight;
        n /= 10;
        
        weight *= 2; 
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}