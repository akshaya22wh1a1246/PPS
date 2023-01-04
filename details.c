#include<stdio.h>
void main()
{
	int age,salary;
	char sex;
	char doj[10];
	char pname[20];
	printf("\n Give the pname,sex,age,salary,date of joining..");
	scanf("%s\n%c%d%d%s",pname,&sex,&age,&salary,doj);
	printf("\n Name of the person : %s \n Sex : %c \n Age : %d \n Salary : %d LPA \n doj : %s",pname,sex,age,salary,doj);
}
