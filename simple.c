#include<stdio.h>
#include<math.h>
void main()
{
	float s,p,t,r;
	printf("give the principle,time,rate of intrest...");
	scanf("%f%f%f",&p,&t,&r);
	s=(p*t*r)/100;
	printf("\n simple intrest=%.2f",s);
}
