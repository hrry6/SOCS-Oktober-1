#include <stdio.h>

void shouting_game(int T, int test_cases[]) {
    for (int case_number = 0; case_number < T; case_number++) {
        int N = test_cases[case_number];
        printf("Case #%d:\n", case_number + 1);
        
        for (int i = 1; i <= N; i++) {
            if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0) {
                printf("%d Jojo\n", i);
            } else {
                printf("%d Lili\n", i);
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    int test_cases[T];
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &test_cases[i]);
    }
    
    shouting_game(T, test_cases);
    
    return 0;
}

