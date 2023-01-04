#include<stdio.h>
void main()
{
	int sec,hr,min,rm,rs;
	printf("\n Enter the seconds...");
	scanf("%d",&sec);
	hr=sec/24;
	rm=sec%24;
	min=rm/60;
	rs=rm%60;
	printf("\n %ls seconds has %ls hours %ls minutes %ls seconds",&sec,&hr,&min,&rs);
}	


