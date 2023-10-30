#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int n);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int x;
    printf("Enter array size: ");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int is_composite(int n)
{
    if(n<=3)
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

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(is_composite(a[n]))
        {
        }
    }
    return sum;    
}

void output(int sum)
{
    printf("%d",sum);
}