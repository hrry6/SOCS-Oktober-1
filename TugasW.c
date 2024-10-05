#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    while (T--) {
        int N; 
        scanf("%d", &N); 

        int odd_count = 0; 
        int even_count = 0;
        
        for (int i = 0; i < N; i++) {
            int Ai; 
            scanf("%d", &Ai);
            
            if (Ai % 2 == 0) {
                even_count++;
            } else {
                odd_count++; 
            }
        }
        
        printf("Odd group : %d integer(s).\n", odd_count);
        printf("Even group : %d integer(s).\n\n", even_count);
    }

    return 0;
}