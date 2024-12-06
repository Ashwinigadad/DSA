#include<stdio.h>
#include<stdlib.h>

char *rev(char *p)
{
	static char a[100];
	static int i;
	if(*p)
	{
		rev(p+1);
		a[i++]=*p;
	}
	return a;
}

char rev_word(char *p)
{

	
}
int main()
{
	char *p=(char *)malloc(10 * sizeof(char));
	
	printf("string:");
	scanf("%s",p);
	
	printf("%s",rev(p));
}
