#include <stdio.h>

int main() {
    int M, N; 
    scanf("%d %d", &M, &N);

    for (int m = 0; m < M; m++) {
        for (int h = 1; h <= N; h++) {

            for (int j = N; j > h; j--) {
                printf(" "); 
            }

            for (int i = 0; i < h; i++) {
                printf("*");
            }
            printf("\n");
        }
        
    }

    return 0;
}