#include <stdio.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
}

Point input_point()
{
    Point p;
    scanf("%f%f",&p.x,&p.y);
}

Line input_line()
{
    Line l;
    l.p1=input_point();
    l.p2=input_point();
    
}