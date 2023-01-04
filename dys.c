#include<stdio.h>
void main()
{
	int n,weeks,months,years;
	printf("\n Enter number of days...");
	scanf("%d",&n);
	years=n/365;
	months=n/30;
	weeks=n/7;

	printf("%d has %d years %d months %d weeks ",n,years,months,weeks);
}
	

