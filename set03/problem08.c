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
{
    Polygon p;
    p.sides=input_n();
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}

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
        printf("Enter the coordinates of point %d (x,y):\n",i+1);
        p->p[i]=input_point();
    }
}

float find_distance(Point a, Point b)
{
    float dist=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return dist;
}

void find_perimeter(Polygon *p)
{
    for(int i=0;i<p->sides;i++)
    {
        p->perimeter+=find_distance(p->p[i],p->p[i+1]);
    }
}

void output(Polygon p)
{
    printf("The perimeter of the polygon is %f",p.perimeter);
}