#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int line = (N + 1) / 2 + 5;
    
    int star = 1;
    int space = line - 1;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    space = ((line * 2) - 1 - N) / 2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
