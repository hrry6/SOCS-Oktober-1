#include <stdio.h>

int main()
{
    int a;
    long long money, result = 0;
    scanf("%d", &a);

    for(int i = 1; i <=a; i++)
    {
        scanf("%lld", &money);
        result += money;
    }

    printf("%lld\n", result);

    return 0;
}