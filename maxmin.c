#include<stdio.h>
void max();
void main()
{
	int a[10],i,n;
		printf("\n Enter no.of elements..");
		scanf("%d",&n);
		printf("\n Enter %d array elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max(a,n);
}
max(int A[10],int num)
{
	int max,min,i;
	max=A[0];
	min=A[0];
	for(i=0;i<num;i++)
	{
		if(A[i]>max)
		 max=A[i];
	}
	for(i=0;i<num;i++)
	{
		if(A[i]<min)
			min=A[i];
	}
	printf("\n Max=%d MIn=%d ",max,min);
}


