#include<stdio.h>
int fibo(int);
int main()
{
int n,res;
printf("\n Enter n..");
scanf("%d",&n);
fibo(n);
}

fibo(x)
{
	int a=0,b=1,c,i;
	printf("\n a=%d b=%d",a,b);
	for(i=3;i<=x;i++)
	{
		c=a+b;
		printf("\n %d",c);
		a=b;
		b=c;
	
	}
}
