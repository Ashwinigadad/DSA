#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int length = 0;
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
	char str1;
	char str2;
	
	printf("str1:");
	scanf("%[^\n]s",str1);
	
	while(getchar()=='\n');
	printf("str2:");
	scanf("%[^\n]s",str2);
    return 0;
}

