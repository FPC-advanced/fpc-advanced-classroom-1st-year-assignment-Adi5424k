#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c,x;
    a=input_side();
    b=input_side();
    c=input_side();
    x=check_scalene(a,b,c);
    output(a,b,c,x);
    return 0;
}

int input_side()
{
    int x;
    scanf("%d",&x);
    return x;
}

int check_scalene(int a,int b,int c)
{
    if(a==b || a==c)
    {
        return 0;
    }   
    else if(b==c)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle with sides %d,%d and %d is not Scalene.",a,b,c);
    }
    else
    {
        printf("The triangle with sides %d,%d and %d is Scalene.",a,b,c);
    }
}