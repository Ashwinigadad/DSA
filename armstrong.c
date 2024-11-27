#include<stdio.h>
#include<math.h>

int main(){
	int num,res=0,rem,count=0,x;
	printf("Enter a number:");
	scanf("%d",&num);
	
	x=num;
	while(num>0){
		num=num/10;
		count++;
	}
	num=x;
	while(num>0){
	rem=num%10;
	num=num/10;
	res=res+pow(rem,count);
	}
	if(x==res){
		printf("yes");
	}
	else
		printf("no");
	
}
