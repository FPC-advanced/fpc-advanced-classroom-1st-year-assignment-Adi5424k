#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{}

int input_n()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;
        }
    }
    float k=0,j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            k+=a[i];
            j++;
        }
    }
    return k/j;
}

void output(float avg)
{
    
}