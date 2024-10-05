#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        printf("Case %d: ", t);
        for (int i = 0; i < N; i++) {
            int pieces = (i * i + i + 2) / 2;
            printf("%d", pieces);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}