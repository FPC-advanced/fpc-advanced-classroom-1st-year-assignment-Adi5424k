#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,lrg=0;
    a=input();
    b=input();
    c=input();
    lrg=compare(a,b,c);
    output(a,b,c,lrg);
    return 0;
}

int input()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    return x;
}

int compare(int a,int b,int c)
{
    int lrg=0;
    if(a>=b && a>=c)
    {
        lrg=a;
    }
    else if(b>=a && b>=c)
    {
        lrg=b;
    }
    else
    {
        lrg=c;
    }
    return lrg;
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}