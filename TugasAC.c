#include <stdio.h>

int main() {
    int T, N, M, min_price;

    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        scanf("%d %d", &N, &M);

        min_price = 2147483647; // Initialize to a large value

        for (int i = 0; i < N; i++) {
            int price;
            scanf("%d", &price);

            if (price < min_price) {
                min_price = price;
            }
        }

        printf("Case #%d: %d\n", case_num, M / min_price);
    }

    return 0;
}