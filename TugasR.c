#include <stdio.h>

int main() {
    int T, N;
    long long heights[100001], min_diff, diff;

    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%lld", &heights[i]);
        }

        min_diff = 9223372036854775807LL; 

        for (int i = 0; i < N - 1; i++) {
            diff = heights[i] > heights[i + 1] ? heights[i] - heights[i + 1] : heights[i + 1] - heights[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        printf("Case #%d: %lld\n", t, min_diff);
    }

    return 0;
}