#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a[100],r[100];
    input_string(a);
    str_reverse(a,r);
    output(a,r);
    return 0;
}

void input_string(char *a)
{
    scanf("%s",a);
}

void str_reverse(char *str,char*rev_str)
{
    int len=0;
    while(str[len]!='\0')
    {len++;}
    for(int i=0;i<len;i++)
    {
        rev_str[i]=str[(len-1)-i];
    }
    rev_str[len]='\0';
}

void output(char *a, char *reverse_a)
{
    printf("%s reversed is: %s",a,reverse_a);
}