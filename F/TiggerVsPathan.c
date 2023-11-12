#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        char S[N];
        scanf("%s", S);
        
        int tiger_wins = 0, pathan_wins = 0;
        
        for (int i = 0; i < N; i++) {
            if (S[i] == 'T') {
                tiger_wins++;
            } else if (S[i] == 'P') {
                pathan_wins++;
            }
        }
        
        if (tiger_wins > pathan_wins) {
            printf("Tiger\n");
        } else if (pathan_wins > tiger_wins) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }
    
    return 0;
}
