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
    int gcd,k;
    k = a<b?a:b;
    for(int i=1;i<=k;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

void output(int a,int b,int gcd)
{
    printf("GCD of %d and %d is %d",a,b,gcd);
}