#include<stdio.h>
int main()
{
	int n,i,j,m,flag=0,sum=0;
	printf("Enter number");
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
	if(flag==0){
		sum=sum+j;
		printf("%d\t",j);
		}
}
printf("\nsum:%d",sum);
}
