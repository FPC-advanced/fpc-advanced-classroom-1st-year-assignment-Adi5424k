#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{}

int input_n()
{
    int n;
    printf("Number of fractions: ");
    scanf("%d",&n);
    return n;
}

Fraction input_fraction()
{
    Fraction x;
    scanf("%d%d",&x.num,&x.den);
    return x;
}

void input_n_fractions(int n, Fraction f[n])
{
    printf("Enter %d fractions:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&f[i].num,&f[i].den);
    }
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

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num=(f1.num*f2.den)+(f2.num*f1.den);
    sum.den=f1.den*f2.den;
    int gcd=find_gcd(sum.num,sum.den);
    sum.num/=gcd;
    sum.den/=gcd;
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum;
    for(int i=0;i<n-1;i++)
    {
        sum=add_fractions(f[i],f[i+1]);
    }
    return sum;
}