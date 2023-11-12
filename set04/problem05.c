#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int x,lrg;
    x=input_size();
    int a[x];
    input_array(x,a);
    lrg=find_largest_index(x,a);
    output(lrg);
    return 0;
}

int input_size()
{
    int x;
    printf("Enter array size: ");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    printf("Enter %d elements into the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int i,k=a[0];
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            j=i;
        }
    }
    return j;
}

void output(int index)
{
    printf("The index of the largest number in the array is %d\n",index);
}