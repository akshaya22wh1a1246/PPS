#include<stdio.h>
void main()
{
	int n,*ptr,a[10],i,m;
        printf("\n Enter the value of n...");
	scanf("%d",&n);
	
	ptr=&a[0];	
	for(i=0;i<n;i++)
		scanf("%d",ptr++);


	ptr=&a[0];
	for(i=0;i<n;i++)
		printf("%3d",*ptr++);
}


