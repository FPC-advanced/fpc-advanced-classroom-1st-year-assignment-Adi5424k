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

Fraction smallest3(Fraction x, Fraction y, Fraction z)
{
    float xf,yf,zf;
    xf=x.num/x.den;
    yf=y.num/y.den;
    zf=z.num/z.den;
    float k=(xf<yf)?((xf<zf)?xf:zf):((yf<zf)?yf:zf);
    if(k==xf)
    {
        return x;
    }
    else if(k==yf)
    {
        return y;
    }
    else
    {
        return z;
    }
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