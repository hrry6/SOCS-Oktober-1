#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        unsigned long long X;
        int P; 
        scanf("%llu %d", &X, &P); 
        

        int bitValue = (X >> P) & 1;


        printf("%d\n", bitValue);
    }

    return 0;
}