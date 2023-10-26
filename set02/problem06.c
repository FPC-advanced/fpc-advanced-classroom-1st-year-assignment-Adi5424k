#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str);
void output(char *a);

int main()
{
    char a[100],r[100];
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
    for(len=0;str[len]!='\0';len++);
    for(int i=0;i<len;i++)
    {
        str[i]=str[(len-1)-i];
    }
    str[len]='\0';
}

void output(char *a)
{
    printf("reversed string is: %s",a);
}