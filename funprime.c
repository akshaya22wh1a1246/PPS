int prime();
int main()
{

int n,res;
printf("\n Enter n...");
scanf("%d",&n);
res= prime(n);
if(res==2)
	printf("\n n is prime");
else
	printf("\n n is not prime");

}

int prime(int a)
{
	int i,count;
	for(i=1;i<a;i++,count++)
	{
		if(a%i==0)
			count=1;
	}
	return(count);
}
