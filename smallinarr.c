#include<stdio.h>

int main(){
	int i,n,arr[100],small;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	small=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1]){
			small=arr[i+1];
		}
	}
	printf("small:%d",small);
}
	
	
	//1 2 3 4 5
	
	
