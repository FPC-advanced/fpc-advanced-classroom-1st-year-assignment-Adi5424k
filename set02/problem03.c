#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,r;
    n=input_number();
    r=is_composite(n);
    output(n,r);
    return 0;
}

int input_number()
{
    int x;
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 1;
            }
        }
        return 0;   
    }
}

void output(int n, int result)
{
    if(result==0)
    {
        printf("%d is not a composite number.",n);
    }
    else
    {
        printf("%d is a composite number.",n);
    }
}