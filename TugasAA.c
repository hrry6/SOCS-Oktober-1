#include <stdio.h>

int main() {
    int N, current_position = 0;
    
    // Input the number of dice throws
    scanf("%d", &N);
    
    // Snakes and Ladders positions
    int ladders[3][2] = {{9, 21}, {33, 42}, {76, 92}};
    int snakes[3][2] = {{53, 37}, {80, 59}, {97, 88}};
    
    // For each dice roll
    for (int i = 0; i < N; i++) {
        int dice;
        scanf("%d", &dice);
        
        // Move forward by dice roll
        current_position += dice;
        
        // Cap the position to 30,000 if exceeded
        if (current_position > 30000) {
            current_position = 30000;
        }

        // Check for ladders
        for (int j = 0; j < 3; j++) {
            if (current_position == ladders[j][0]) {
                current_position = ladders[j][1];
            }
        }

        // Check for snakes
        for (int j = 0; j < 3; j++) {
            if (current_position == snakes[j][0]) {
                current_position = snakes[j][1];
            }
        }
    }
    
    // Output the final position
    printf("%d\n", current_position);
    
    return 0;
}