#include<stdio.h>
int main(){
	int num,sum=0,x,rem,count=0,y;
	printf("number:");
	scanf("%d",&num);
	x=num;

	while(num>0){
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	}
	printf("%d\n",sum);
	if(sum>9)
	{
	num=sum;
	sum=0;
	printf("%d\n",num);
		while(num>0){
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	}
	}
	
	printf("%d",sum);
	


	
	return 0;
}



