#include <stdio.h>

struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{}
int get_n()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	return n;
}

Complex input_complex()
{
    Complex r;
    scanf("%f%f",&r.real,&r.imaginary);
    return r;
}

void input_n_complex(int n, Complex c[n])
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=input_complex();
	}
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
	int i;
	Complex sum;
	sum.imaginary=0;sum.real=0;
	for(i=0;i<n;i=i+2)
	{
		sum=add_complex(c[i],c[i+1]);
	}
	return sum;	
}

void output(int n, Complex c[n], Complex result)
{
	
}