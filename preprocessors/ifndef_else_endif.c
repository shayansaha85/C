#include<stdio.h>
#define NOTHING
int main() {
	int n;
	#ifndef NOTHING
	n=7;
	#else
	printf("Enter the value of n = ");
	scanf("%d",&n);
	#endif
	printf("n = %d",n);
}