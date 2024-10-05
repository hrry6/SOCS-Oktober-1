#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int K; 
        scanf("%d", &K);
        
        int jumps = 0;
        int distance = 0;

        while (distance < K) {
            jumps++;
            distance += jumps; 
        }

        printf("Case #%d: %d\n", t, jumps);
    }

    return 0;
}