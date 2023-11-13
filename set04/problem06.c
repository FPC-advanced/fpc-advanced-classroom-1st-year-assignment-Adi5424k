#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char str[100];
    int w=0;
    input_string(str);
    w=count_words(str);
    output(str,w);
    return 0;
}

void input_string(char *a)
{
    scanf("%s",a);
}

int count_words(char *string)
{
    int c=0;
    char tok=strtok(string," ");
    while(tok!=NULL)
    {
        c++;
        tok=strtok(NULL," ");
    }
    return c;
}

void output(char *string, int no_words)
{
    printf("The number of words in %s is %d",string,no_words);
}