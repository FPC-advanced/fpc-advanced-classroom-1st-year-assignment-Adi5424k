#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void output(Camel c);

int main()
{
	Camel c;
	c=input();
	c.weight=find_weight(c);
	output(c);
	return 0;
}

Camel input()
{
	Camel c;
	printf("Radius: ");
    scanf("%f",&c.radius);
    printf("Height: ");
    scanf("%f",&c.height);
    printf("Length: ");
    scanf("%f",&c.length);
	return c;
}

float find_weight(Camel c)
{
	c.weight=3.1415*(pow(c.radius,3))*(sqrt(c.height*c.length));
	return c.weight;
}

void output(Camel c)
{
	printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n",c.radius,c.height,c.length,c.weight);
}