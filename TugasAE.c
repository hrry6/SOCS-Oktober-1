#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    
    for (int t = 1; t <= T; t++) {
        int R, H;
        scanf("%d %d", &R, &H);  // Read radius and height
        
        // Calculate the surface area
        double surface_area = 2 * 3.14 * R * (R + H);
        
        // Print the result with two decimal places
        printf("Case #%d: %.2f\n", t, surface_area);
    }
    
    return 0;
}
