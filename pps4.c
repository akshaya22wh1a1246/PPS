#include<stdio.h>
#include<math.h>
void main()
{
	int x1,x2,y1,y2,d;
	x1=4;x2=5;y1=8;y2=6;
	printf("the values of coordinates are x1=%d x2=%d y1=%d y2=%d",x1,x2,y1,y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between two coordinates is %d",d);
}
