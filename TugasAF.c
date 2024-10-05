#include <stdio.h>

// Function to count the number of ON bits (1s) in the binary representation of a number
int count_on_bits(int x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    for (int case_num = 1; case_num <= T; case_num++) {
        int N;
        scanf("%d", &N);  // Size of the array

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);  // Reading the array elements
        }

        int at_least_3_on_bits = 0, less_than_3_on_bits = 0;

        // Compare each pair (A_i, A_j) where i < j
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int xor_result = arr[i] ^ arr[j];
                int on_bits = count_on_bits(xor_result);
                if (on_bits >= 3) {
                    at_least_3_on_bits++;
                } else {
                    less_than_3_on_bits++;
                }
            }
        }

        // Output the result for this test case
        printf("Case #%d: %d %d\n", case_num, at_least_3_on_bits, less_than_3_on_bits);
    }

    return 0;
}