#include <stdio.h>
#include <string.h>

void convert_message(int N, int K, char S[]) {
    K = K % 26; 
    for (int i = 0; i < N; i++) {
        int original_num = S[i] - 'a';
        int new_num = (original_num + K) % 26;
        S[i] = 'a' + new_num;
    }
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N, K;
        char S[101]; 
        scanf("%d %d", &N, &K);
        scanf("%s", S);

        convert_message(N, K, S);

        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}