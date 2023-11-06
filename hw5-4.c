#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    float angle, angleh, dah, anglem;
    scanf("%d%d", &h, &m);
    if (h == 12) angleh = 0.5 * m;
    else angleh = (h * 30 + 0.5 * m);
    anglem = m * 6 ;
    angle = angleh - anglem;
    if (angle >= 180) printf("%.3lf", 360 - angle);
    else if (angle < 0) printf("%.3lf", angle + (-2)*angle);
    else printf("%.3lf", angle);
}
