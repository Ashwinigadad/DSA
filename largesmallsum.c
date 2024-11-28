#include<stdio.h>

int main(){
	int i,n,arr[100],small,large,sum,min_sum,max_sum;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum=small=large=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
		
		sum=sum+arr[i];
	}
	printf("small:%d\n",small);
	printf("large:%d\n",large);
	printf("sum:%d\n",sum);
	
	min_sum=sum-large;
	max_sum=sum-small;
	
	printf("maxsum:%d\n",max_sum);
	printf("minsum:%d\n",min_sum);
	
	
	}
	
	//1 2 3 4 5
	
	
