#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int x;
    x=input_array_size();
    int a[x];
    init_array(x,a);
    erotosthenes_sieve(x,a);
    output(x,a);
    return 0;
}

int input_array_size()
{
    int x;
    scanf("%d",&x);
    return x;
}

void init_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        a[i]=(i+1);
    }
}

void erotosthenes_sieve(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>3 && a[i]!=5)
        {
            if(a[i]%2==0 || a[i]%3==0 && a[i]%5==0)
            {
                a[i]=0;
            }
        }
    }
}

void output(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d, ",a[i]);
        }
    }
}