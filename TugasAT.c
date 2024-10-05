#include <stdio.h>

void draw_isosceles_triangle(int X) {

    for (int i = 1; i <= X; i++) {

        for (int j = 1; j <= X - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int X;
        scanf("%d", &X);

        draw_isosceles_triangle(X);
    }

    return 0;
}