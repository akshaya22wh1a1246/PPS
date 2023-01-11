#include<stdio.h>
#include<math.h>
void main()
{
	float r,pi,sa,v;
	pi=3.14;
	printf("\n Give the radius of shpere...");
	scanf("%f",&r);
	sa=4*pi*r*r;
	v=4/3*pi*r*r*r;
	printf("\n Surface area of sphere=%f",sa);
	printf("\n Volume of sphere=%f",v);
}
