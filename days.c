#include<stdio.h>
void main()
{
	int ndays,weeks,months,years,rd,rm,rw;
	printf("\n GIve the number of days..");
	scanf("%d",&ndays);
	years=ndays/365;
	rm=ndays%365;
	months=rm/30;
	rw=rm%30;
	weeks=rw/7;
	rd=rw%7;
	printf("%d has %d years %d months %d weeks %d days",ndays,years,months,weeks,rd);
}
