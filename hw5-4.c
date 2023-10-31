#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    float angle, angleh, dah, anglem;
    scanf("%d%d", &h, &m);
    angleh = h * 30 + 0.5 * m;
    anglem = m * 6 ;
    angle = angleh - anglem;
    if (angle >= 180) printf("%1lf", angle-180);
    else printf("%1lf", angle);
}
