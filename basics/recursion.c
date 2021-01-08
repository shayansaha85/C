/*
This recursion example is done with factorial program
*/

#include<stdio.h>
int factorial(int n) {
	if(n==0||n==1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}
int main() {
	int x=5;
	int ans=factorial(x);
	printf("%d\n",ans);
}