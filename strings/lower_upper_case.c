#include<stdio.h>
#include<string.h>
int main() {
	char str[100] = "sHaYaN";
	printf("Upper case = %s\n",strupr(str));
	printf("Lower case = %s",strlwr(str));
}