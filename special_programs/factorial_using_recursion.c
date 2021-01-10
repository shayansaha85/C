#include<stdio.h>
int factorial(int n) {
	if(n==0||n==1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	int ans=factorial(n);
	printf("%d! = %d",n,ans);
}