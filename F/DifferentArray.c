#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Size of the array A

        int A[N], B[N], C[N];
        
        // Read array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Make a copy of array A and sort it to get array B
        for (int i = 0; i < N; i++) {
            B[i] = A[i];
        }
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    // Swap elements in array B to sort it in ascending order
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // Calculate and store the absolute differences in array C
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
