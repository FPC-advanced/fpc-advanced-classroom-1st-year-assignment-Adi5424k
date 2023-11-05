#include <stdio.h>

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
    int i=0,j=0,len1=0,len2=0;
    for(len1=0;string[len1]!='\0';len1++);
    for(len2=0;substring[len2]!='\0';len2++);
    for(i=0;i<len1;i++)
    {
        if(string[i]==substring[0])
        {
            for(j=0;j<len2;j++)
            {
                if(substring[j]!=string[i])
                {
                    break;
                }
                else
                { return i; }
            }
        }
    }
}

void output(char *string, char *substring, int index)
{
    printf("The index of '%s' in '%s' is %d\n",substring,string,index);
}