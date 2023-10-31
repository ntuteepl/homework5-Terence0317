#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c, f;
    scanf("%lf", &c);
    f = (c * 9 / 5) + 32 ;
    printf("%.1lf", f);
    return 0;
}
