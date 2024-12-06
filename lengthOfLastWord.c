#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s,int length) {
    int i = strlen(s) - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
	char s[100],length=0;
	printf("str1:");
	scanf("%[^\n]",s);
	lengthOfLastWord(s,length);
	printf("%d",length);
    return 0;
}

