#include <math.h>
#include <stdio.h>

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
    double x1, y1;
    double x2, y2;

    printf("Find the distance between 2 points.\n");
    printf("Point1 -- X:");
    scanf("%lf", &x1);
    printf("          Y:");
    scanf("%lf", &y1);
    printf("Point2 -- X:");
    scanf("%lf", &x2);
    printf("          Y:");
    scanf("%lf", &y2);

    printf("The distance between the two points are %f.\n", dist(x1, y1, x2, y2));
}