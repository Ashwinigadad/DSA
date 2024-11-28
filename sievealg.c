#include<stdio.h>
int main()
{
	int n;
	printf("Number:");
	scanf("%d",&n);
	
	printf("Prime numbers are:\n");
	sievePrime(n);
	
	return 0;
}

void sievePrime(int n)
{
	int primes[n+1];
	int i,j;
	
	for(i=0;i<=n;i++)
		primes[i]=1;
	}
	
	
