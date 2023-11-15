#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float r,h,l;
    input_camel_details(&r,&h,&l);
    int m=find_mood(r,h,l);
    output(r,h,l,m);
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

int find_mood(float radius, float height, float length)
{
    if(radius<height && radius<length)
    {
        return -1;
    }
    else if(height<length)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void output(float radius, float height, float length, int mood)
{
    if(mood==-1)
    {
        printf("The camel is sick\n");
    }
    else if(mood==0)
    {
        printf("The camel is happy\n");
    }
    else
    {
        printf("The camel is tense\n");
    }
}