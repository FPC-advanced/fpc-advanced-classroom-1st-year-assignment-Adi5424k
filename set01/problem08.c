#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
    int x,sum=0;
    x=input_array_size();
    int a[x];
    input_array(x,a);
    sum=sum_n_array(x,a);
    output(x,a,sum);
    return 0;
}

int input_array_size()
{
    int x;
    printf("Input Array size: ");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    int i;
    printf("Input array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int i,sum=0;
        for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

void output(int n, int a[n],int sum)
{
    printf("Sum of the elements in the Array is %d",sum);
}