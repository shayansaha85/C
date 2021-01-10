#include<stdio.h>
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	if(n==0) {
		printf("0! = 1");
	} else {
		int ans=1;
		for(int i=1;i<=n;i++) {
			ans=ans*i;
		}
		printf("%d! = %d",n,ans);
	}
}