#include<stdio.h>

void callByValue(int a,int b){
	a=a+10;b=b+10;
	printf("inside fun a=%d and b=%d\n",a,b);
}

int main(){
	int x=10,y=20;
	printf("\n Before calling: x=%d and y=%d",x,y);
	
	callByValue(x,y);
	printf("\n After calling: x=%d and y=%d",x,y);
	return 0;
}
