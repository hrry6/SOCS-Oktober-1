#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        long long M;  
        scanf("%d %lld", &N, &M);  

        long long total_cost = 0;  

        for (int i = 0; i < N; i++) {
            long long price;
            scanf("%lld", &price);
            total_cost += price;  
        }

        if (total_cost > M) {
            printf("Case #%d: Wash dishes\n", case_number); 
        } else {
            printf("Case #%d: No worries\n", case_number);  
        }
    }

    return 0;
}