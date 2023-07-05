//C program to add two complex numbers by passing structure to a function.
#include<stdio.h>
#include<stdlib.h>
struct complex
{
	float real;
	float imaginary;
	
};
float addcomplex(struct complex a,struct complex b)
{ 
    float c,d;
    c=a.real+b.real;
    d=a.imaginary+b.imaginary;
	printf("%f+i%f",c,d);
}

int main()
{
	struct complex x,y;
	printf("enter one numbers : ");
	scanf("%f %f",&x.real,&x.imaginary);
	printf("enter second numbers : ");
	scanf("%f %f",&y.real,&y.imaginary);
	addcomplex(x,y);
}
