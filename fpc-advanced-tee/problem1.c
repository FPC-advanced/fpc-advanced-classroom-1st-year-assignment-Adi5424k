#include <stdio.h>

int input();
int check_fact(int x);
void output(int x, int r);

int main()
{
	int x=input();
	int r=check_fact(x);
	output(x,r);
	return 0;
}

int input()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	return x;
}

int check_fact(int x)
{
	int k=1;
	if(x==1)
	{
		return 0;
	}
	else
	{
	for(int i=2;k<x;i++)
	{
		k*=i;
		if(k==x)
		{
			return i;
		}
	}
	return -1;
    }
}

void output(int x, int r)
{
	if(r==-1)
	{
		printf("%d is not a factorial number.\n",x);
	}
	else if(r==0)
	{
		printf("%d(0!) & %d(1!)\n",x,x);
    }
	else
	{
		printf("%d(%d!)\n",x,r);
	}
}
