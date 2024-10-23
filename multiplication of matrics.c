#include <stdio.h>
int m,n ,p;
void mult_matr(int A[m][n], int B[n][p], int res[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    printf("Enter the number of your first matrix row:");
    scanf("%d", &m);
    printf("Enter the number of your first matrix column and second matrix row:");
    scanf("%d", &n);
    printf("Enter the number of your second matrix column:");
    scanf("%d", &p);


    int A[m][n], B[n][p];
    printf("Enter the elements of your first matrix row by row:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of your second matrix row by row:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    int res[m][p];
    mult_matr(A, B, res);

    printf("Result of multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
