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
//lucky=num%9==0?9:num%9;

/*do
{
	sum=0;
	while(num>0){
	rem=num%10;
	num=num/10;
	sum=sum+rem;
	}
	if(sum>9)
		num = sum;
}while(sum>9);
*/

