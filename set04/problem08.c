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
    for(int i=0;)
}