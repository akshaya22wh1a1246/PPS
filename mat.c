#include<stdio.h>

void main()
{
	int i,j,A[100][100],r,c;
	printf("\n Enter no.of rows and columns");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
	scanf("%d",&A[i][j]);
        print(A[i][j],r,c);

}
printmatrix(int array[][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n %d",array[i][j]);
		}
	printf("\n");
          }
}	
