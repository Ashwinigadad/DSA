#include<stdio.h>
int main(){
	int num,rem,x;
	printf("number:");
	scanf("%d",&num);
	x=0;
	while(num>0){
		rem=num%10;
		num=num/10;
		if(rem>x){
			x=rem;
		}
	}
	printf("%d\n",x);
}
