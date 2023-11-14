#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float r,h,l,w;
    input_camel_details(&r,&h,&l);
    w=find_weight(r,h,l);
    output(r,h,l,w);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Radius: ");
    scanf("%f",radius);
    printf("Height: ");
    scanf("%f",height);
    printf("Length: ");
    scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
    float weight=3.1415*(pow(radius,3))*(sqrt(height*length));
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n",radius,height,length,weight);
}