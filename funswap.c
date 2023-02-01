#include<stdio.h>
int swap();
void main()
{
	int a,b;
	printf("\n Enter a,b..");
	scanf("\n %d%d",&a,&b);
	swap(a,b);
}
int swap(c,d)
{
int t;
printf("\n Before swaping c=%d d=%d",c,d);
t=d;
d=c;
c=t;
printf("\n AFter swapping c=%d d=%d",c,d);
}
