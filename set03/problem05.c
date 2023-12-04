#include <stdio.h>
#include <math.h>

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
    a[n-1]=0;
    int j=2;
    for(int i=0;i<n-1;i++)
    {
        a[i]=j;
        j++;
    }
}

void erotosthenes_sieve(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            for(int j=(a[i]*a[i]);j<=n;j+=a[i])
            {
                a[j-2]=0;
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
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}