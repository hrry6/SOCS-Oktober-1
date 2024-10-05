#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N, grade = 0;
        scanf("%d", &N);

        char S[101], K[101];
        scanf("%s", S); 
        scanf("%s", K); 


        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                grade++; 
            }
        }

 
        int result = (grade * 100) / N;

 
        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}