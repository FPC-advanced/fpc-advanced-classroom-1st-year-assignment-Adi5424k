#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int n1,n2,d1,d2,rn,rd;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&rn,&rd);
    output(n1,d1,n2,d2,rn,rd);
    return 0;    
}


void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter first numerator and denomenator : ");
    scanf("%d%d",num1,den1);
    printf("Enter second numerator and denomenator: ");
    scanf("%d%d",num2,den2);
}

int find_gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return find_gcd(b,a%b);
    }
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    if(den1==den2)
    {
        *res_num=num1+num2;
        *res_den=den1;
    }
    else
    {
        int i, cd=den1*den2;
        num1*=den2;
        num2*=den1;
        *res_num=num1+num2;
        *res_den=cd;
        int gcd=find_gcd(*res_num,*res_den);
        *res_num/=gcd;
        *res_den/=gcd;
    }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den);
}