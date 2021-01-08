#include<stdio.h>
#include<string.h>
int main() {
	char str1[100];
	gets(str1);
	char str2[100];
	strcpy(str2,str1);
	puts(str2);
}