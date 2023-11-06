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
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{}

int input_n()
{
    int x;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d",&x);
    return x;
}

Point input_point(char *promt_msg)
{
    
}