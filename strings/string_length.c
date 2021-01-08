#include<stdio.h>
#include<string.h>
int main() {
	char ch[30];
	gets(ch);
	int length = strlen(ch);
	printf("\nThe string length is = %d",length);
}