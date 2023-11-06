#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    float cost;
    scanf("%d", &min);
    if (min >= 0 && min <= 800) cost = 0.9 * min;
    else if (min > 800 && min < 1500) cost = 0.81 * min;
    else cost = 0.711 * min;
    printf("%.1f", cost);
}
