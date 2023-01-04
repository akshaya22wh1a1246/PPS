#include<stdio.h>
void main()
{
	int n,i;
	printf("\n Enter the value of n..");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
			printf("\n %d is Even",i);
		else
			printf("\n %d is Odd",i);
		i++;

	}

}

