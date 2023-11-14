#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
  Point a,b;
  float distance;
  a=input();
  b=input();
  dist(a,b,&distance);
  output(a,b,distance);
  return 0;
}

Point input()
{
  Point p;
  scanf("%f%f",&p.x,&p.y);
  return p;
}

void dist(Point a, Point b, float *res)
{
  *res=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
}

void output(Point a, Point b, float res)
{
  printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f",a.x,a.y,b.x,b.y,res);
}