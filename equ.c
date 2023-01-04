#include<stdio.h>
#include<math.h>
void main()
{
	float s,a;
	printf("\n Give the value of side of a triangle...");
	scanf("%f",&s);
	a=(sqrt(3)/4)*s*s;
	printf("\n Area of equilateral triangle=%.2f",a);
}
