#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    b += a;

    for(int i = a; i < b; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}