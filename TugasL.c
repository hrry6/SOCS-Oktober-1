#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int case_number = 1; case_number <= T; case_number++) {
        int A, B;
        scanf("%d %d", &A, &B);  

        int total_drunk = A;  
        int empty_bottles = A;

        while (empty_bottles >= B) {
            int new_bottles = empty_bottles / B;  
            total_drunk += new_bottles;  
            empty_bottles = new_bottles + (empty_bottles % B);  
        }

        printf("Case #%d: %d\n", case_number, total_drunk);
    }

    return 0;
}