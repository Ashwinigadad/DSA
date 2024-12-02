#include<stdio.h>
void readArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}

void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}

void triplet(int arr[],int n,int x){
	int i,j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((arr[i]+arr[j]+arr[k])==x){
					printf("%d\t%d\t%d\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
}

int main()
{
	int arr[1000];
	int n,x;

	printf("size:");
	scanf("%d",&n);
	
	printf("Enter array:");
	readArray(arr,n);
	
	printf("print array:");
	printArray(arr,n);
	
	printf("enter sum");
	scanf("%d",&x);
	
	triplet(arr,n,x);
	return 0;
}
	
				
