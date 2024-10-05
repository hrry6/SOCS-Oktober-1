#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        int N; 
        scanf("%d", &N);
        
        char S[N + 1]; 
        scanf("%s", S);
        
        int countBibi = 0; 
        int countLili = 0; 
        
        for (int i = 0; i < N; i++) {
            if (S[i] == 'B') {
                countBibi++;
            } else if (S[i] == 'L') {
                countLili++;
            }
        }
        
        if (countBibi > countLili) {
            printf("Bibi\n");
        } else if (countLili > countBibi) {
            printf("Lili\n");
        } else {
            printf("None\n");
        }
    }
    
    return 0;
}