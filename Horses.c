#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    if (abs(x1 - x2) + abs(y1 - y2) == 3 && abs(x1 - x2) * abs(y1 - y2) != 0)
        printf("YES");
    else
        printf("NO");
}