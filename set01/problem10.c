#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int r;
    char str1[100],str2[100];
    input_two_strings(str1,str2);
    r=stringcompare(str1,str2);
    output(str1,str2,r);
    return 0;
}

void input_two_strings(char *string1, char *string2)
{
    printf("Enter string one: ");
    scanf("%s",string1);
    printf("Enter string two: ");
    scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
    int i;
    for(i=0;string1[i]==string2[i] && string1[i]!='\0' && string2[i]!='\0';i++);
    return (string1[i]-string2[i]);
}

void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater than %s",string1,string2);
    }
    else if(result<0)
    {
        printf("%s is greater than %s",string2,string1);
    }
    else
    {
        printf("Strings are equal");
    }
}