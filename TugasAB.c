#include <stdio.h>

// Function to calculate Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to count multiples up to N for a given divisor
int count_multiples(int n, int divisor) {
    return n / divisor;
}

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    for (int case_num = 1; case_num <= T; case_num++) {
        int N, A, B, C, D;
        scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);

        // Inclusion-Exclusion counts
        int countA = count_multiples(N, A);
        int countB = count_multiples(N, B);
        int countC = count_multiples(N, C);
        int countD = count_multiples(N, D);
        
        // Pairwise LCMs
        int countAB = count_multiples(N, lcm(A, B));
        int countAC = count_multiples(N, lcm(A, C));
        int countAD = count_multiples(N, lcm(A, D));
        int countBC = count_multiples(N, lcm(B, C));
        int countBD = count_multiples(N, lcm(B, D));
        int countCD = count_multiples(N, lcm(C, D));
        
        // Three-way LCMs
        int countABC = count_multiples(N, lcm(lcm(A, B), C));
        int countABD = count_multiples(N, lcm(lcm(A, B), D));
        int countACD = count_multiples(N, lcm(lcm(A, C), D));
        int countBCD = count_multiples(N, lcm(lcm(B, C), D));

        // Four-way LCM
        int countABCD = count_multiples(N, lcm(lcm(A, B), lcm(C, D)));

        // Apply inclusion-exclusion principle
        int total_count = countA + countB + countC + countD
                        - countAB - countAC - countAD - countBC - countBD - countCD
                        + countABC + countABD + countACD + countBCD
                        - countABCD;

        // Output the result for this test case
        printf("Case #%d: %d\n", case_num, total_count);
    }

    return 0;
}
