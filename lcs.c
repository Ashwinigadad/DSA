#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    return a>b ? a : b;
}

int lcs(char s1[],char s2[],int m,int n)
{
    if(s1[m]==0 || s2[n]==0)
        return 0;
        
    if(s1[m]==s2[n])
        return 1 + lcs(s1,s2,m+1,n+1);
    else
        return max( lcs(s1,s2,m+1,n), lcs(s1,s2,m,n+1) );
}


int main()
{
    char str1[100];
    char str2[100];
    
    printf("Enter string1: ");
    scanf("%[^\n]s",str1);
    
    while(getchar()!='\n');
    
    printf("Enter string2: ");
    scanf("%[^\n]s",str2);
    
    printf("Longest Common Subsequence: %d",lcs(str1,str2,0,0));
    return 0;
}

