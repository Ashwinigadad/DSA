#include<stdio.h>

int lengthOfStr(char *p)
{
	if(*p=='\0')
		return 0;
	else
		return 1+lengthOfStr(p+1);
}

int main(){
	printf("%d\n",lengthOfStr("AshwiniGadad"));
}
