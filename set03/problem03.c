#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{}

int input_number()
{
    int x;
    scanf("%d",&x);
    return x;
}

int is_prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        return !(n%i==0);
    }
}

void output(int n,int result)
{
    if(result==1)
}