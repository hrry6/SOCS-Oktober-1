#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 

        int A[N], max_score = 0, count = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);

            if (A[i] > max_score) {
                max_score = A[i];
                count = 1; 
            } else if (A[i] == max_score) {
                count++; 
            }
        }

        printf("Case #%d: %d\n", t, count);
    }

    return 0;
}