#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        long long N;
        scanf("%lld", &N);

        int length = 0;
        long long temp = N;
        while (temp > 0) {
            temp /= 10;  
            length++;    
        }
        
        printf("Case #%d: %d\n", t, length);
    }
    
    return 0;
}