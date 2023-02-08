#include<stdio.h>
void sumarray();
void main()
{
	int n,i,a[100],k;
	printf("\n Enter no. of array elements..");
	scanf("%d",&n);
	printf("%d elements..",n);
	for(i=0;i<n;i++)
	   scanf("%d",a[i]);
	k=sizeof(a)/sizeof(a[0]);
	printf("k=%d in main function",k);
        sumarray(a,n);
}
sumarray(int A[],int b)
{
	int i,sum=0;
	int k=sizeof(A);
	printf("\n k=%d in sumarray function",k);
	for(i=0;i<b;i++)
		printf("%d",A[i]);
	for(i=0;i<b;i++)
		sum=sum+A[i];
	printf("\n sum=%d",&sum);
}
