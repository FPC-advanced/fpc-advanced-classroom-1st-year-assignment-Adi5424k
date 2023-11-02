#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int x,f;
    x=input();
    f=find_fibo(x);
    output(x,f);
    return 0;
}

int input()
{
    int x;
    scanf("%d",&x);
    return x;
}

int find_fibo(int n)
{
    int c=0;
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
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

void output(int n, int fibo)
{
    printf("fibo(%d) = %d\n",n,fibo);
}