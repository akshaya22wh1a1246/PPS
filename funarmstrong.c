#include<stdio.h>
int arm();
int main()
{
	int n,res;
	printf("\n Enter n..");
	scanf("%d",&n);
	res=arm(n);
	if(res==n)
		printf("\n %d is an Armstrong number..",n);
	else
		printf("\n %d is not  ARmstrong number..",n);
}
int arm(int a)
{
	int i,rem,sum=0;
	while(a>0)
	{
		rem=a%10;
		sum=(sum+rem*rem*rem);
		a=a/10;
	}
	return(sum);
}
		
