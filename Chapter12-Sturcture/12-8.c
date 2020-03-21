#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct
{
	double x;
	double y;
} Point;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
	Point crnt, dest;

	printf("    Current coordinates:  X:");
	scanf("%lf", &crnt.x);
	printf("                          Y:");
	scanf("%lf", &crnt.y);
	printf("Destination coordinates:  X:");
	scanf("%lf", &dest.x);
	printf("                          Y:");
	scanf("%lf", &dest.y);

	printf("The distance to destination is %.2f\n", distance_of(crnt, dest));

	return 0;
}
