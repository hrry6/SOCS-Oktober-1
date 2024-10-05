#include <stdio.h>

int main() {
    int a, count[1001] = {0}, max_packets = 0, item;

    scanf("%d", &a);  
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &item);
        count[item]++;
    }
    

    for (int i = 1; i <= 1000; i++) {
        if (count[i] > max_packets) {
            max_packets = count[i];
        }
    }
    

    printf("%d\n", max_packets);
    
    return 0;
}