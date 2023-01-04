#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c;
	float s,area;
	printf("\n Enter the sides of a triangle a,b,c..");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n Area of triangle=%f",area);
}

