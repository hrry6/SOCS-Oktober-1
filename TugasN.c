#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int case_number = 1; case_number <= T; case_number++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int total_drunk = A;  
        int empty_cups = A;   


        while (empty_cups >= B) {
            int new_cups = empty_cups / B;  
            total_drunk += new_cups;         
            empty_cups = new_cups + (empty_cups % B);  
        }

        printf("Case #%d: %d\n", case_number, total_drunk);
    }

    return 0;
}