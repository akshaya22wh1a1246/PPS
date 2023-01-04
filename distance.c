#include<stdio.h>
#include<math.h>
void main()
{
	int u,t,s,a;
	printf("Enter the values of u,t,a...");
	scanf("%d%d%d",&u,&t,&a);
	s=u*t+0.5*(a*t*t);
	printf("%d",s);
}
