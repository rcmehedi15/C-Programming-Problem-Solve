#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int positive_sum = 0;
    int negative_sum = 0;
    int total;

    for (int i = 0; i < n; i++) {
        scanf("%d", &total);
        if (total > 0) {
            positive_sum += total;
        } else {
            negative_sum += total;
        }
    }

    printf("%d %d\n", positive_sum, negative_sum);

    return 0;
}
