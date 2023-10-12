#include <stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,lrg=0;
    input(&a,&b,&c);
    compare(a,b,c,&lrg);
    output(a,b,c,lrg);
    return 0;
}

int input(int *a, int *b, int *c)
{
    printf("Enter number 1:");
    scanf("%d",a);
    printf("Enter number 2:");
    scanf("%d",b);
    printf("Enter number 3:");
    scanf("%d",c);
}

void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    {
        *largest=a;
    }
    else if(b>=a && b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}