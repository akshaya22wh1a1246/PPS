#include<stdio.h>
int fact();
int main()
{
	int n,res;
	printf("\n Enter n..");
	scanf("\n %d",&n);
	res=fact(n);
	printf("\n %d",res);
}

int fact(a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
		fact=fact*i;
	return(fact);
}

		

