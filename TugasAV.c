#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Baca nilai N

    int count = 0;

    // Loop untuk semua kemungkinan nilai j
    for (int j = 0; j <= N; j++) {
        // Untuk setiap j, jumlah kombinasi (l, b) yang valid adalah (N - j + 1)
        count += (N - j + 1);
    }

    // Cetak hasil
    printf("%d\n", count);

    return 0;
}