#include <stdio.h>
#include <string.h>

int main() {
    char S[10001]; 
    scanf("%s", S);

    int charCount[26] = {0}; 

    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            charCount[S[i] - 'a']++;  
        }
    }

    for (int i = 0; i < 26; i++) {
        if (charCount[i] > 0) {
            printf("%c - %d\n", 'a' + i, charCount[i]);
        }
    }

    return 0;
}
