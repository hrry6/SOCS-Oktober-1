#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int case_number = 1; case_number <= T; case_number++) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);  

        int largest_portion = K;  
        int Xi;

        for (int i = 0; i < N; i++) {
            scanf("%d", &Xi);  
            if (Xi > K && Xi <= M) {
                if (Xi > largest_portion) {
                    largest_portion = Xi;  
                }
            }
        }

        printf("Case #%d: %d\n", case_number, largest_portion);
    }

    return 0;
}