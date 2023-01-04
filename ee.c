#include<stdio.h>
#include<math.h>
void main()
{
float r,pi,s,v;
pi=3.14;
printf("enter the value of radius");
scanf("%f",&r);
s=4*pi*r*r;
v=4/3*pi*r*r;
printf("\n surface area of sphere=%f",s);
printf("\n volume of sphere=%f",v);
}
