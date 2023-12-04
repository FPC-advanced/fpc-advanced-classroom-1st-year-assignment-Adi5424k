#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input()
{
    Fraction x;
    scanf("%d%d",&x.num,&x.den);
    return x;
}

int find_gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return find_gcd(b,a%b);
    }
}

int find_lcm(int a,int b)
{
    return (a*b)/find_gcd(a,b);
}

int find_lcm3(int a, int b, int c)
{
    return find_lcm(find_lcm(a,b),c);
}

Fraction smallest3(Fraction x, Fraction y, Fraction z)
{
    int a=(x.num*y.den*z.den);
    int b=(y.num*x.den*z.den);
    int c=(z.num*x.den*y.den);
    Fraction r=(a<b)?((a<c)?x:z):((b<c)?y:z);
    return r;
}

void output(Fraction x,Fraction y,Fraction z,Fraction r)
{
    printf("The smallest out of %d/%d, %d/%d and %d/%d is %d/%d.\n",x.num,x.den,y.num,y.den,z.num,z.den,r.num,r.den);
}

int main()
{
    Fraction x,y,z,smallest;
    x=input();
    y=input();
    z=input();
    smallest=smallest3(x,y,z);
    output(x,y,z,smallest);
    return 0;
}