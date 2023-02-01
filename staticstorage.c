#include<stdio.h>
int sample();
main()
{
	int c;
	c=sample();
	c=sample();
        c=sample();
        printf("\n count=%d",c);
}
int sample()
{
	 static int count;
	 count++;
	 return(count);
}

