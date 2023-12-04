#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char str[100],substr[100];
    int i=0;
    input_string(str,substr);
    i=sub_str_index(str,substr);
    output(str,substr,i);
    return 0;
}

void input_string(char* a, char* b)
{
    printf("Enter string: ");
    scanf("%s",a);
    printf("Enter substring: ");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int i=0,j=0;
    int len1=strlen(string);
    int len2=strlen(substring);
    for(i=0;i<len1-len2+1;i++)
    {
        if(strncmp(string+i,substring,len2)==0)
        {
            return i;
        }
    }
    return -1;
}

void output(char *string, char *substring, int index)
{
    if(index==-1)
    {
        printf("The substring dosen't exist in the string.\n");
    }
    else
    {
        printf("The index of '%s' in '%s' is %d\n",substring,string,index);
    }
}