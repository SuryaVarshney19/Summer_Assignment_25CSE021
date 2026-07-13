#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Row-wise Sum:\n");

    for(int i = 0; i < r; i++) {
        sum = 0;

        for(int j = 0; j < c; j++)
            sum += a[i][j];

        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}