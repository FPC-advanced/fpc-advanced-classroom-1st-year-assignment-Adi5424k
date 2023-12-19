#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Fritacole
{
    char *name;
    float height;
    int integrity;
    int interest;
    int ability;
    int discipline;
} fritacole;

fritacole input_fri()
{
    fritacole f;
	printf("Enter name, height, integrity, interest, ability, discipline:\n");
	scanf("%s %f %d %d %d %d",f.name,&f.height,&f.integrity,&f.interest,&f.ability,&f.discipline);
    return f;
}

void ftostring(fritacole f, char str[100]) 
{
    sprintf(str,"Name=%s, Height=%f, Integrity=%d, Interest=%d, Ability=%d, Discipline=%d",f.name,f.height,f.integrity,f.interest,f.ability,f.discipline);
    puts(str);

}

fritacole stringtof(char str[100])
{
	fritacole f;
	char dtm[100];
	strcpy(dtm,str);
	sscanf(dtm,"%s %f %d %d %d %d",f.name,&f.height,&f.integrity,&f.interest,&f.ability,&f.discipline);
	return f;
}

int main()
{
	fritacole f;
	f=input_fri();
	char str[100];
	ftostring(f,str);
	fritacole ff=stringtof(str);
	printf("%s %f %d %d %d %d",ff.name,ff.height,ff.integrity,ff.interest,ff.ability,ff.discipline);
    return 0;
}