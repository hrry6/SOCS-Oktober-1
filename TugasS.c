#include <stdio.h>

int main() {
    int N;
    long long P;

    scanf("%d %lld", &N, &P);

    long long strength[N];
    int count = 0; 

    for (int i = 0; i < N; i++) {
        scanf("%lld", &strength[i]);
    }

    for (int i = 0; i < N; i++) {
        if (P > strength[i]) {
            count++; 
        }
    }

    printf("%d\n", count);

    return 0;
}
