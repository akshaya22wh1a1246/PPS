#include<stdio.h>
void main()
{
	char g1[10],g2[15],g3[14],g4[15];
	int w1,w2,w3,w4;
	float p1,p2,p3,p4,bill;
	printf("\n Enter the 4 grocery items..");
	scanf("%s%s%s%s",g1,g2,g3,g4);
        printf("\n Enter the weights of grocery..");
        scanf("%d%d%d%d",&w1,&w2,&w3,&w4);
	printf("\n Enter the prices of grocery..");
	scanf("%f%f%f%f",&p1,&p2,&p3,&p4);
	bill=(w1*p1)+(w2*p2)+(w3*p3)+(w4*p4);
	printf("\n Total bill=%.2f",bill);
}



	
