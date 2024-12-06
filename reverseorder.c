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
	char *t=(char *)malloc(10 * sizeof(char));
	char *p=NULL;
	int a;
	printf("string:");
	scanf("%[^\n]",t);
	p=rev(t);
	
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
