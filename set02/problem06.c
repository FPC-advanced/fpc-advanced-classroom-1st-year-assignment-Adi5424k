#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str);
void output(char *a);

int main()
{
    char a[100];
    input_string(a);
    str_reverse(a);
    output(a);
    return 0;
}

void input_string(char *a)
{
    scanf("%s",a);
}

void str_reverse(char *str)
{
    int len;
    char rev;
    for(len=0;str[len]!='\0';len++);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        rev=str[i];
        str[i]=str[j];
        str[j]=rev;
    }
}

void output(char *a)
{
    printf("reversed string is: %s",a);
}