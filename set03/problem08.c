#include <stdio.h>
#include <math.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{}

int input_n()
{
    Polygon x;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d",&x.sides);
    return x.sides;
}

Point input_point()
{
    Point p;
    scanf("%f%f",&p.x,&p.y);
    return p;
}

void input_polygon(Polygon *p)
{
    for(int i=0;i<(p->sides);i++)
    {
        p->p[i]=input_point();
    }
}

float find_distance(Point a, Point b)
{
    float x=((a.x-l->p1.x)*(l->p2.x-l->p1.x)+(l->p2.y-l->p1.y)*(l->p2.y-l->p1.y));
    l->distance=sqrt(x);
}