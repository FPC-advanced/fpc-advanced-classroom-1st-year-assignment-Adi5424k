#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
}

int input()
{
    int x;
    scanf("%d",&x);
    return x;
}

int find_fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2 || n==3)
    {
        return 1;
    }
    int a=1,b=1;
    for(int i=4;i<=n;i++)
    {
        a,b=b,a+b;
    }
    return a;
}