#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n=input_n();
    Triangle t[n],sm;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    sm=find_smallest_triangle(n,t);
    output(n,t,sm);
    return 0;
}

int input_n()
{
    int n;
    scanf("%d",&n);
    return n;
}

Triangle input_triangle()
{
    Triangle t;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}

void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i]=input_triangle();
    }
}

void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2;
}

void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle sm=t[0];
    for(int i=0;i<n;i++)
    {
        if(t[i].area<sm.area)
        {
            sm=t[i];
        }
    }
    return sm;
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest triangle out of triangles with base and height");
    for(int i=0;i<n;i++)
    {
        printf(" (%.f,%.f) ",t[i].base,t[i].altitude);
    }
    printf("is the triangle having base %.2f, height %.2f and area %.2f",smallest.base,smallest.altitude,smallest.area);
}