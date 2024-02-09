#include <stdio.h>

int array_size();
void input_arr(int n, int a[n]);
void fact_arr(int n, int a[n], int b[n]);
void output(int n, int b[n]);

int main()
{
	int x=array_size();
	int a[x], b[x];
	input_arr(x,a);
	fact_arr(x,a,b);
	output(x,b);
	return 0;
}

int array_size()
{
	int x;
	printf("Enter array size: ");
	scanf("%d",&x);
	return x;
}

void input_arr(int n, int a[n])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

int check_fact(int x)
{
	int k=1;
	if(x==1)
	{
		return 1;
	}
	else
	{
	for(int i=2;k<x;i++)
	{
		k*=i;
		if(k==x)
		{
			return 1;
		}
	}
	return 0;
}
}	

void fact_arr(int n, int a[n], int b[n])
{
	for(int i=0;i<n;i++)
	{
		if(check_fact(a[i])==1)
		{
			b[i]=a[i];
		}
		else
		{
			b[i]=0;
		}
	}
}

void output(int n, int b[n])
{
	for(int i=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			printf(" %d ",b[i]);
		}
	}
	printf("\n");
}
