#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int original_days = (M1 * D) / (M1 + M2); 
        int reduced_days = D - original_days; 

        printf("%d\n", reduced_days);
    }

    return 0;
}
