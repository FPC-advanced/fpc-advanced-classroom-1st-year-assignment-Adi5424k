#include <stdio.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x;
    x=input();
    float borg; 
    borg=borga_X(x);
    output(x,borg);
    return 0;
}

int input()
{
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    return x;
}

float borga_X(int x)
{
    float borg=1.0,term=1.0,j=1.0;
    while(term>0.000001)
    {
        term*=(float)(x)/((2*j)*(2*j+1));
        borg+=term;
        j++;
    }
    return borg;
}

void output(int x, float result)
{
    printf("borga(%d)=%f\n",x,result);
}