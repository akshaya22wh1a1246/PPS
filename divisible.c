#include<stdio.h>
#include<math.h>
void main()
{
	int a;
	printf("\n Give the value of a..");
	scanf("%d",&a);
	if((a%5==0) && (a%7==0))
		printf("\n The number is divisible by both 5 and 7");
}
