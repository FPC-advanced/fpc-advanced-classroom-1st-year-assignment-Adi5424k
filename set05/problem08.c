#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input_n(int *n);
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    input_n(&n);
    Camel c[n];
    float truck,total;
    input(n,c,&truck);
    find_camel_weight(n,c);
    total=compute_total_weight(n,c,truck);
    output(total);
    return 0;
}

void input_n(int *n)
{
    printf("Enter the number of camels: ");
    scanf("%d",n);
}

void input(int n, Camel c[n], float *truck_weight)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the radius of camel no.%d:\n",i+1);
        scanf("%f",&c[i].radius);
        printf("Enter the height of camel no.%d:\n",i+1);
        scanf("%f",&c[i].height);
        printf("Enter the length of camel no.%d:\n",i+1);
        scanf("%f",&c[i].length);
    }
    printf("Enter the weight of the truck:\n");
    scanf("%f",truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for(int i=0;i<n;i++)
    {
        c[i].weight=3.1415*(pow(c[i].radius,3))*(sqrt(c[i].height*c[i].length));
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total=truck_weight;
    for(int i=0;i<n;i++)
    {
        total+=c[i].weight;
    }
    return total;
}

void output(float total_weight)
{
    printf("The Total weight of the truck is: %f\n",total_weight);
}