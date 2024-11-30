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
			temp=arr[n-1];
		for(i=n-1;i>=0;i--)
			arr[i+1]=arr[i];
		arr[0]=temp;
	}
		for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
	
	
/*
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize; 
    if (k == 0) return;

    void reverse(int* arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);

    for (int i = 0; i < numsSize; i++) {
        printf("%d\t", nums[i]);
    }
}
*/
	
	
	
	//1 2 3 4 5
	
	
