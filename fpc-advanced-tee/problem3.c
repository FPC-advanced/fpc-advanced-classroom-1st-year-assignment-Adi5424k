#include <stdio.h>

typedef struct Points
{
	int score;
} points;

typedef struct Fouls
{
	int foul;
} fouls;

typedef struct Fritacole
{
    char *name;
    float height;
    int integrity;
    int interest;
    int ability;
    int discipline;
	points p;
	fouls fo;
} fritacole;

typedef struct Team
{
    int players;
    fritacole f[100];
} team;


typedef struct Game
{
    team t1;
    team t2;
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
	input_game(&g);
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

void input_game(game *g)
{
	for(int i=0;i<g->t1.players;i++)
	{
		printf("Enter the points scored by player %d of team 1: ",i+1);
		scanf("%d",&g->t1.f[i].p.score);
	}
	for(int i=0;i<g->t2.players;i++)
	{
		printf("Enter the points scored by player %d of team 2: ",i+1);
		scanf("%d",&g->t2.f[i].p.score);
	}
	for(int i=0;i<g->t1.players;i++)
	{
		printf("Enter the fouls made by player %d of team 1: ",i+1);
		scanf("%d",&g->t1.f[i].fo.foul);
	}
	for(int i=0;i<g->t2.players;i++)
	{
		printf("Enter the fouls made by player %d of team 2: ",i+1);
		scanf("%d",&g->t2.f[i].fo.foul);
	}
}

int compare_teams(game g)
{
	int t1score=0,t2score=0;
	for(int i=0;i<g.t1.players;i++)
	{
		t1score+=g.t1.f[i].p.score;
	}
	for(int i=0;i<g.t2.players;i++)
	{
		t2score+=g.t2.f[i].p.score;
	}
	int t1fouls=0,t2fouls=0;
	for(int i=0;i<g.t1.players;i++)
	{
		t1fouls+=g.t1.f[i].fo.foul;
	}
	for(int i=0;i<g.t2.players;i++)
	{
		t2fouls+=g.t2.f[i].fo.foul;
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
