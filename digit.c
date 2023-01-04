#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("\n GIve the number...");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
			printf("\n %3d",rem);
		sum=sum+rem;	
	        num=num/10;
	}
	printf("\n Sum=%3d",sum);
}


