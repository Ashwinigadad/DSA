#include<stdio.h>

void slidingwindow(int arr[],int n,int k)
{
	int i,j,sum=0,max_sum=0;
	for(i=0;i<k;i++)
		sum+=arr[i];
	max_sum=sum;
	for(i=k;i<n;i++)
	{
		sum=sum-arr[i-k]+arr[i];
		if(sum>max_sum)
		{
			max_sum=sum;

		}
		
	}	
		printf("max_sum:%d",max_sum);
		printf("array:\n");
		for(j=i-k;j<=i;j++)
			printf("%d\t",arr[j]);
		
}

int main()
{
	int arr[100],i,k,n;
	
	printf("enter size:");
	scanf("%d",&n);
	
	printf("\nread array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nprint array:");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	printf("\n enter k:");
	scanf("%d",&k);
	
	printf("sub array:\n");
	slidingwindow(arr,n,k);
	

	
	return 0;
	


}
