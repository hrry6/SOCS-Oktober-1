#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int animals[N]; 
    int totalAnimals = 0; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &animals[i]);
        totalAnimals += animals[i]; 
    }

    printf("%d\n", totalAnimals);

    return 0;
}