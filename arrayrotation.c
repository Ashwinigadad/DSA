//Array Rotation 
//1.Rotate array elements by k times on left side and 2.right side
#include<stdio.h>

int main(){
	int i,j,n,arr[100],temp,k;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("rotations:");
	scanf("%d",&k);
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(j=0;j<k;j++)
	{
			temp=arr[0];
		for(i=0;i<n;i++)
			arr[i]=arr[i+1];
		arr[n-1]=temp;
	}
		for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
	
	

	
	
	
	//1 2 3 4 5
	
	
