#include <stdio.h>
#include <stdlib.h>

const int n = 1500 ;

void display(int** arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int** matrix1 = malloc(n * sizeof(int*));
    int** matrix2 = malloc(n * sizeof(int*));
    int** ans = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        matrix1[i] = malloc(n * sizeof(int));
        matrix2[i] = malloc(n * sizeof(int));
        ans[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix1[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix2[i][j] = rand() % 100;
        }
    }

    display(matrix1);
    display(matrix2);

    // Multiplying the matrix1 and matrix2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < n; k++) {
               ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    display(ans);

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(ans[i]);
    }
    free(matrix1);
    free(matrix2);
    free(ans);

    return 0;
}
