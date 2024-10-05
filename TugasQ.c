#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        long long N, X; 
        scanf("%lld %lld", &N, &X);

        long long flips_from_front = X / 2;

        long long flips_from_back;
        if (N % 2 == 0) {
            flips_from_back = (N - X + 1) / 2; 
        } else {
            flips_from_back = (N - X) / 2; 
        }

        long long min_flips = flips_from_front < flips_from_back ? flips_from_front : flips_from_back;


        printf("Case #%d: %lld\n", t, min_flips);
    }

    return 0;
}