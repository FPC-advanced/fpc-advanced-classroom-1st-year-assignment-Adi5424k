#include <stdio.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{}

Point input()
{
    Point p;
    scanf("%f%f",p.x,p.y)
}
