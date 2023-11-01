#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, X;
        scanf("%d", &n);
        int A[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        scanf("%d", &X);

        int found = 0;  

        for (int i = 0; i < n; i++) {
            if (A[i] == X) {
                found = 1;
                break;  
            }
        }

        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
