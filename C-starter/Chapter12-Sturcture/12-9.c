#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    Point pt;
    double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
    printf("Current Position: (%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("       Fuel left: %.2fL\n", c.fuel);
}

int move(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if (d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};

    while (1)
    {
        int select;
        Point dest;

        put_info(mycar);

        printf("Start the car? [Yes---1/No---0]");
        scanf("%d", &select);
        if (select != 1)
            break;

        printf("Coordinates of destination: X:");
        scanf("%lf", &dest.x);
        printf("                            Y:");
        scanf("%lf", &dest.y);

        if (!move(&mycar, dest))
            puts("\aNot enough fuel!");
    }

    return 0;
}
