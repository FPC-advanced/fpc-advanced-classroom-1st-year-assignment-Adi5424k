#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    scanf("%f%f",x1,y1);
    scanf("%f%f",x2,y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float dist=sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)));
    return dist;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between point (%f,%f)")
}