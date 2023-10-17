#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd=0;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
}

int input()
{
    int x;
    scanf("%d",&x);
    return x;
}

int find_gcd(int a, int b)
{
    int gcd=0;
    for(int i=2;a%i==0 && b%i==0;i++)
    {
        gcd=(gcd*i);
    }
    return gcd;
}

void output(int a,int b,int gcd)
{
    printf("GCD of %d and %d is %d",a,b,gcd);
}