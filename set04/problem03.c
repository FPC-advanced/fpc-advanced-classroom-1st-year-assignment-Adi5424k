#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,ncr;
    input_n_and_r(&n,&r);
    ncr=nCr(n,r);
    output(n,r,ncr);
    return 0;
}

void input_n_and_r(int *n, int *r)
{
    printf("Enter n and r:\n");
    scanf("%d%d",n,r);
}

int fct(int n)
{
    int i;
    for(i=1;n!=0;n--)
    {
        i*=n;
    }
    return i;
}

int nCr(int n, int r)
{
    int ncr= fct(n)/(fct(r)*fct(n-r));
    return ncr;
}

void output(int n, int r, int result)
{
    printf("for n = %d and r = %d, nCr = %d",n,r,result);
}