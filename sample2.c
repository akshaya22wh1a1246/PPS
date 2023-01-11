#include<stdio.h>
#include<math.h>
void main()
{
	int x1=2,x2=4,y1=8,y2=5,d;
	printf("x1=%d x2=%d y1=%d y2=%d",x1,x2,y1,y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between 2 coordinates=%d",d);
}
