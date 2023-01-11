#include<stdio.h>
void main()
{
	int n,i,c=0;
        printf("\n Enter the value of n..");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		c++;
                i++;
	}
	if(c==2)
		printf("%d is prime",n);
	else
		printf("%d is not a prime",n);
}
