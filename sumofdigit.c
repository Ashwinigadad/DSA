#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,rem,sum=0;
	int i;
	printf("Enter the num:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num % 10;
		sum = sum +rem;
		num = num/10;
	}
	printf("The sum of all digits:%d",sum);
	
	return 0;
}
	
