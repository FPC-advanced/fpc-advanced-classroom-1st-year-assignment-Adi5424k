#include <stdio.h>

typedef struct Fritacole
{
    char *name;
    float height;
    int integrity;
    int interest;
    int ability;
    int discipline;
} fritacole;

typedef struct Team
{
    int players;
    fritacole f[100];
} team;

typedef struct Points
{
    team t1;
    int p1[100];
    team t2;
    int p2[100];
} points;

typedef struct fouls
{
    team t1;
    int f1[100];
    team t2;
    int f2[100];
} fouls;

typedef struct Game
{
    team t1;
    team t2;
    points p;
    fouls f;
} game;

void input_team(game *g);
void input_points(game *g);
void input_fouls(game *g);
int compare_teams(game g);
int compare_fritacole(game g);
int verify_win(game g, int teams, int fritacole);
void output(game g, int win);


int main()
{
	game g;
	input_team(&g);
	input_points(&g);
	input_fouls(&g);
	int c=compare_teams(g);
	int f=compare_fritacole(g);
	int w=verify_win(g,c,f);
	output(g,w);
	return 0;
}

fritacole input_fri()
{
    fritacole f;
	printf("Enter name, height, integrity, interest, ability, discipline:\n");
	scanf("%s %f %d %d %d %d",&f.name,&f.height,&f.integrity,&f.interest,&f.ability,&f.discipline);
    return f;
}

void input_team(game *g)
{
    printf("Enter number of players in team 1: \n");
    scanf("%d",&g->t1.players);
    for(int i=0;i<g->t1.players;i++)
    {
       	printf("Fritacole no. %d\n",i+1);
       	g->t1.f[i]=input_fri();
    }
	printf("Enter number of players in team 2: \n");
    scanf("%d",&g->t2.players);
    for(int i=0;i<g->t2.players;i++)
    {
       	printf("Fritacole no. %d\n",i+1);
       	g->t2.f[i]=input_fri();
    }
}

void input_points(game *g)
{
	for(int i=0;i<g->t1.players;i++)
	{
		printf("Enter the points scored by player %d of team 1: ",i+1);
		scanf("%d",&g->p.p1[i]);
	}
	for(int i=0;i<g->t2.players;i++)
	{
		printf("Enter the points scored by player %d of team 2: ",i+1);
		scanf("%d",&g->p.p2[i]);
	}
}

void input_fouls(game *g)
{
	for(int i=0;i<g->t1.players;i++)
	{
		printf("Enter the fouls made by player %d of team 1: ",i+1);
		scanf("%d",&g->f.f1[i]);
	}
	for(int i=0;i<g->t2.players;i++)
	{
		printf("Enter the fouls made by player %d of team 2: ",i+1);
		scanf("%d",&g->f.f2[i]);
	}
}

int compare_teams(game g)
{
	int t1score=0,t2score=0;
	for(int i=0;i<g.t1.players;i++)
	{
		t1score+=g.p.p1[i];
	}
	for(int i=0;i<g.t2.players;i++)
	{
		t2score+=g.p.p2[i];
	}
	int t1fouls=0,t2fouls=0;
	for(int i=0;i<g.t1.players;i++)
	{
		t1fouls+=g.f.f1[i];
	}
	for(int i=0;i<g.t2.players;i++)
	{
		t2fouls+=g.f.f2[i];
	}
	if(t1score==t2score)
	{
		return!(t1fouls>t2fouls);
	}
	else
	{
		return(t1score>t2score);
	}
}

int compare_fritacole(game g)
{
	int h1=0,h2=0;
	for(int i=0;i<g.t1.players;i++)
	{
		h1+=g.t1.f[i].height;
	}
	for(int i=0;i<g.t2.players;i++)
	{
		h1+=g.t2.f[i].height;
	}
	return(h1>h2);
}

int verify_win(game g, int teams, int fri)
{
	if(fri==1)
	{
		if(teams==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(teams==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void output(game g, int win)
{
	if(win==1)
	{
		printf("The better team won.\n");
	}
	else
	{
		printf("The better team did not win.\n");
	}
}
