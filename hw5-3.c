#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, h_rate;
    double salary;
    scanf("%d%d", &hour, &h_rate);
    if (hour >= 0 && hour <= 60) salary = h_rate * hour;
    else if (hour > 60 && hour <= 120) salary = (hour - 60) * h_rate * 1.33 + 60 * h_rate;
    else salary = 60 * h_rate + 60 * h_rate * 1.33 + (hour - 120) * h_rate * 1.66;
    printf("%.1lf", salary);
}
