#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    long long total_profit = 0; 
    int A[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);


        if (A[i] > 0) {
            total_profit += A[i];
        }
    }


    printf("%lld\n", total_profit);

    return 0;
}