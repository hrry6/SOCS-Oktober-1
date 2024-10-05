#include <stdio.h>

void print_square(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1 || i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}

int main() {
    int T; 
    scanf("%d", &T);
    while (T--) {
        int N; 
        scanf("%d", &N); 

        print_square(N); 

        printf("\n"); 
    }

    return 0;
}