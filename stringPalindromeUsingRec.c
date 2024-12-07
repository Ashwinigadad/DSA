#include<stdio.h>
#include<string.h>
int isPal(char *str,int start,int end)
{
	if(start<=end)
		return 1;
	if (str[start] != str[end - 1])
		return 0;
	return isPal(str, start + 1, end - 1);

}
int main(){
	char str[100];
	
	printf("string:");
	scanf("%s",str);
	if(isPal(str,0,strlen(str)))
		printf("Palindrome");
	else
		printf("Not Palindrome");
}
