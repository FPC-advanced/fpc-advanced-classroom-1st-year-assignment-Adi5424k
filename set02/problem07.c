#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle()
{
    Triangle t;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}

void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2;
}

void output(Triangle t)
{
    printf("The area of triangle wwith base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}