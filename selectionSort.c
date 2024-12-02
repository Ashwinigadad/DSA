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

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void selSort(int arr[],int n)
{
	int i,j,min_i;
	for(i=0;i<n;i++)
	{
		min_i=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min_i]>arr[j])
				min_i=j;

		}
		swap(&arr[min_i],&arr[i]);
	}
	
}

int main()
{
	int arr[1000];
	int n,k;

	printf("size:");
	scanf("%d",&n);
	
	printf("Enter array:");
	readArray(arr,n);
	
	printf("print array:");
	printArray(arr,n);
	
	selSort(arr,n);
	
	printf("\nSorted array:");
	printArray(arr,n);
	
	return 0;
}
	
				
