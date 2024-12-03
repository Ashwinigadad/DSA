#include<stdio.h>

void slidingwindow(int arr[],int n,int sum)
{
	int i,j,cur_sum,start;
	cur_sum=arr[0];
	start=0;
	for(i=1;i<=n;i++)
	{
		while(cur_sum>sum && start<i-1)
		{
			cur_sum=cur_sum-arr[start];
			start++;
		}
		if(cur_sum==sum)
		{
			printf("found btw %d and %d\n",start,i-1);
			for(j=start;j<i;j++)
				printf("\n%d\t",arr[j]);
		}
		if(i<n)
			cur_sum=cur_sum+arr[i];
	}	
}

int main()
{
	int arr[100],i,sum,n;
	
	printf("enter size:");
	scanf("%d",&n);
	
	printf("\nread array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nprint array:");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	printf("\n enter sum:");
	scanf("%d",&sum);
	
	slidingwindow(arr,n,sum);
	return 0;
}
