#include <stdio.h>

int main() {
    int N;

    // Read the size of the square
    scanf("%d", &N);

    // Print the square
    for (int i = 0; i < N; i++) { // Loop for each row
        for (int j = 0; j < N; j++) { // Loop for each column
            printf("*"); // Print the '*' character
        }
        printf("\n"); // New line after each row
    }

    return 0;
}