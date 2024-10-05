#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    int A[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); 
    }

    int steps = 0; 
    for (int i = 0; i < N; i++) {
        if (A[i] == 1) {
            if (steps > 0) {
                printf("%d ", steps);
            }
            steps = 1; 
        } else {
            steps++; 
        }
    }

    printf("%d\n", steps);

    return 0;
}




