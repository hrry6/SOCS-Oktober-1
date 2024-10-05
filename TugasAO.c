#include <stdio.h>
#include <ctype.h>

int main() {
    int T, N;
    char S[101];

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%d", &N);
        getchar();
        fgets(S, sizeof(S), stdin);

        printf("Case #%d: ", i);

        for (int j = 0; j < N; j++) {
            if (isalpha(S[j])) {
                printf("%c", S[j]);
            }
        }

        printf("\n");
    }

    return 0;
}