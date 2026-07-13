/*Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (int k = i - 1; k >= 1; k--) {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }
    return 0;
}