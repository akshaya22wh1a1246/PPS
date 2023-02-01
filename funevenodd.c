#include<stdio.h>
void even(int);
void main()
{
	int n,res;
	printf("\n Enter n...");
	scanf("%d",&n);
	even(n);
}
 even(int n)
{
	if(n%2==0)
		printf("\n nis even");
	else if(n%2!=0)
		printf("\n n is odd");
}
