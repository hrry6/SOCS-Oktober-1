#include <stdio.h>

int main() {
    int N;
    int jojo, lili, bibi;
    int scores[100], total = 0;
    float average;

    scanf("%d", &N);
    scanf("%d %d %d", &jojo, &lili, &bibi);

    total += jojo + lili + bibi;

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        total += scores[i];
    }

    average = total / (float)(N + 3);

    if (jojo >= average) {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }

    if (lili >= average) {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }

    if (bibi >= average) {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }

    return 0;
}