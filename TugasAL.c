#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int weapons[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapons[i]);
    }

    int attacks[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &attacks[i]);
    }


    int max_weapon = weapons[0];
    for (int i = 1; i < N; i++) {
        if (weapons[i] > max_weapon) {
            max_weapon = weapons[i];
        }
    }

    int max_attack = attacks[0];
    for (int i = 1; i < M; i++) {
        if (attacks[i] > max_attack) {
            max_attack = attacks[i];
        }
    }


    if (max_weapon > max_attack) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}


