#include<stdio.h>

int main(){
	int i,n,arr[100],sum=0;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum:%d",sum);
	}
