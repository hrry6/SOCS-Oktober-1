#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        printf("Case #%d:\n", t);

        for (int i = 0; i < N; i++) {
            if (i == 0 || i == N - 1) {
                for (int j = 0; j < M; j++) {
                    printf("#");
                }
            } else {
                printf("#"); 
                for (int j = 1; j < M - 1; j++) {
                    printf(" ");
                }
                printf("#"); 
            }
            printf("\n"); 
        }
    }

    return 0;
}