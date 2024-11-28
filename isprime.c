#include<stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("Enter number");
	scanf("%d",&n);
	
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("prime");
		else
			printf("not prime");

}
