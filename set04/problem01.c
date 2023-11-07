#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{}


void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter first numerator and denomenator: ");
    scanf("%d%d",num1,den1);
    printf("Enter second numerator and denomenator: ");
    scanf("%d%d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    if(den1==den2)
    {
        *res_num=num1+num2;
        *den_n
    }
}