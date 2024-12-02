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

void bubblesort(int arr[],int k,int n)
{
	int i,j,x;
	int st;
	for(i=0;i<n-1;i++)
	{
		st=0;
		for(j=0;j<k-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				st=1;
			}
		}
		
		for(x=k;x<n-i-1;x++){
		if(arr[x]<arr[x+1])
			{
				swap(&arr[j],&arr[j+1]);
				st=1;
			}
		}
		if(st==0)
			break;

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
	
	printf("enter k:");
	scanf("%d",&k);
	
	bubblesort(arr,k,n);
	
	printf("Sorted array:");
	printArray(arr,n);
	
	return 0;
}
	
				
