#include<stdio.h>
void main()
{
	int sal;
	float da,hra,gross;
	char ename[20];
	printf("\n Enter the employee name,salary..");
	scanf("%s%d",ename,&sal);
	if(sal<=10000)
	{
		da=sal*80/100;
	        hra=sal*20/100;
	}
	else if(sal<=20000)
	{
		da=sal*90/100;
		hra=sal*25/100;
	}
        else 
	{
		da=sal*95/100;
		hra=sal*30/100;
	}
	gross=da+hra+sal;
	printf("\n Employee name=%s Salary=%d",ename,sal);
	printf("Da=%f Hra=%f Gross=%f",da,hra,gross);
}


