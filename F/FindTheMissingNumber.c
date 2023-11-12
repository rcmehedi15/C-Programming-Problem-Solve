#include <stdio.h>

// Function to find the missing number
int findMissingNumber(long long M, int A, int B, int C) {
    if (A == 0 || B == 0 || C == 0) {
        return -1;
    }
    long long D = M / (A * B * C);
    if (M == A * B * C * D) {
        return D;
    } else {
        return -1;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);
        int result = findMissingNumber(M, A, B, C);
        printf("%d\n", result);
    }

    return 0;
}
