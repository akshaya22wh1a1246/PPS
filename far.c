#include<stdio.h>
void main()
{
	float c,f;
	printf("\n Plese enter the value of fahrenhiet...");
	scanf("%f",&f);
        c=(f-32)*5/9;
	printf("\n %.2f fahrenheit equal to %f celsius",f,c);
}
