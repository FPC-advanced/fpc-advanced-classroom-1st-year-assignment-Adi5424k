#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int a,b,sum=0;
    a=input();
    b=input();
    sum=(a,b);
    output(a,b,sum);
    return 0;
}

int input()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    return x;
}

int add(int a, int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}

void output(int a,int b,int sum)
{
    printf("Sum of %d+%d is %d",a,b,sum);
}