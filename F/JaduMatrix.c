#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if it is a Jadu Matrix
    int isJaduMatrix = 1; // Assume it's a Jadu Matrix

    // Check the primary diagonal and secondary diagonal
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j || i + j == N - 1) {
                if (matrix[i][j] != 1) {
                    isJaduMatrix = 0;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isJaduMatrix = 0;
                    break;
                }
            }
        }
        if (!isJaduMatrix) {
            break;
        }
    }

    // Output the result
    if (isJaduMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
