#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	num=abs(num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("The count of digits in a number is %d",count);
	return 0;
}
