#include<stdio.h>
#include<stdlib.h>

int rev_word(char *q)
{
	int z;
	if(*q==' ')
		z=0;
	else if(*q=='\0')
		z=0;
	else
		z=rev_word(q+1)+1;
	if(z)
		putchar(*q);
	return z;

	
}
int main()
{
	char *p=(char *)malloc(10 * sizeof(char));
	int a;
	printf("string:");
	scanf("%[^\n]",p);
	while(*p)
	{
		a=rev_word(p);
		p=p+a;
		if(*p==' ')
		{
			putchar(' ');
			p++;
		}
	}
	
}
