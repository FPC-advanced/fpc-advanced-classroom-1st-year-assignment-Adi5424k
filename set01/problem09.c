#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n,sqr;
    n=input();
    sqr=square_root(n);
    output(n,sqr);
    return 0;
}

float input()
{
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    return n;
}

float square_root(float n)
{
    float x,E=0.01;
    x=n/2;
    while ((x*x-n)>E||(n-x*x)>E)
    {
        x=0.5*(x+n/x);
    }
    return x;
}

void output(float n, float sqrroot)
{
    printf("The square root of %.1f is %.1f\n",n,sqrroot);
}