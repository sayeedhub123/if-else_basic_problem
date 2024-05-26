#include <stdio.h>

int main()
{
    int m, x;

    scanf("%d", &m);

    while (m--)

    {
        scanf("%d", &x);
        x = (x * 63 + 7492) * 5 - 498;
        x /= 10;
        if (x < 0)
            x = -x;
        printf("%d\n", x % 10);
    }


    return 0;
}
