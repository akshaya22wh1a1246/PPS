#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter the value of n..");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		printf("%3d",i);
		i=i+2;
	}
}
