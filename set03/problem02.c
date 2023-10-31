#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,x2,x3,y1,y2,y3;
    int r;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    r=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,r);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter co-ordinates of first point :");
    scanf("%f%f",x1,y1);
    printf("Enter co-ordinates of second point:");
    scanf("%f%f",x2,y2);
    printf("Enter co-ordinates of third point :");
    scanf("%f%f",x3,y3);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return dist;
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float dist1=find_distance(x1,y1,x2,y2);
    float dist2=find_distance(x1,y1,x3,y3);
    float dist3=find_distance(x2,y2,x3,y3);
    return ((dist1+dist2>dist3) && (dist1+dist3>dist2) && (dist2+dist3>dist1));
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The point (%f,%f), (%f,%f) and (%f,%f) forms a Triangle",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("The point (%f,%f), (%f,%f) and (%f,%f) does not form a Triangle",x1,y1,x2,y2,x3,y3);
    }
}