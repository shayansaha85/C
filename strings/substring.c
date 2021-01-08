#include<stdio.h>
#include<string.h>
int main() {
	char str[100]= "Shayan is good";
	char *sub;
	sub=strstr(str,"is");
	printf("Substring = %s",sub);
}