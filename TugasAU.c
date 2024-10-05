#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    
    for (int case_num = 1; case_num <= T; case_num++) {
        scanf("%d", &N);
        
        printf("Case #%d: ", case_num);
        
        for (int i = 0; i < N; i++) {
            printf("%c", 'a' + i);
        }
        printf("\n");
    }
    
    return 0;
}