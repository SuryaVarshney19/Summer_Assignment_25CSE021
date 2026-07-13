/*Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }      
        printf("\n");
    }  
    return 0;
}