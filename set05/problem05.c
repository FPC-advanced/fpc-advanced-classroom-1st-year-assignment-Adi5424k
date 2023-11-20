#include <stdio.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main()
{}

int input()
{
    int x;
    scanf("%d",&x);
    return x;
}

float factorial(int x)
{
    float result=1;
    for(int i=0;i<x;i++)
    {
        result*=(float)(x-i);
    }
    return result;
}

float borga_X(int x)
{
    float borg=1,err=1,j=3;
    int a=1;
    while(err>0.000001)
    {
        borg*=(float)x/factorial(j);
        j=j+2;
    }
}