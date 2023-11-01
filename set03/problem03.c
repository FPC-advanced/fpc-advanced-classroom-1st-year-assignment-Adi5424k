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
    if(n>3)
}

void output(int n,int result)
{
    if(result==1)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
}