#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char c[100];
    int r=0;
    input(&c);
    r=has_nice_name(&c);
    output(r);
    return 0;
}

void input(char *name)
{
    printf("Give camel a name: ");
    scanf("%s",name);
}

int has_nice_name(char *c)
{
    int len=0,cons=0,vow=0;
    for(len=0;c!='\0';len++);
    for(int i=0;i<len;i++)
    {
        if(c[i]=='a','e','i','o','u')
        {
            vow++;
        }
        else
        {
            cons++;
        }
    }
    return (vow>2 && cons>2);
}

void output(int res)
{
    if(res==1)
    {
        printf("The camel has a nice name.\n");
    }
    else
    {
        printf("The camel does not have a nice name.\n");
    }
}