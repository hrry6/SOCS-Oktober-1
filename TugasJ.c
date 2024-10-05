#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        scanf("%d", &N);

        long long total_items = 0;  
        for (int i = 0; i < N; i++) {
            int item_count;
            scanf("%d", &item_count);
            total_items += item_count;
        }

        printf("Case #%d: %lld\n", case_number, total_items);
    }

    return 0;
}