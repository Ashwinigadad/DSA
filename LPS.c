#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    return a>b ? a : b;
}
int lps(char str[],int start,int end )
{
    if(start==end)
        return 1;
    if((start+1==end) && (str[start]==str[end]) )
        return 2;
    if(str[start]==str[end])
        return 2+lps(str,start+1,end-1);
    else
        return max( lps(str,start+1,end) , lps(str,start,end-1));
}





int main()
{
    char str[100];
    
    printf("Enter String: ");
    scanf("%s",str);
    
    printf("Longest palindromic Subsequence: %d", lps(str,0,strlen(str)-1));
    return 0;
}
