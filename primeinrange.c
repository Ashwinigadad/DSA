#include<stdio.h>
int main()
{
	int n,i,j,m,flag=0;
	printf("Enter numbers:");
	scanf("%d%d",&m,&n);
	
	for(j=m;j<=n;j++){
	flag=0;
	for(i=2;i*i<=j;i++)
	{
		if(j%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%d\t",j);
}
}
