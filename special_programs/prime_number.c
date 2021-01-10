#include<stdio.h>
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	if(n<=1) {
		printf("Inappropriate value");
	} else {
		int i;
		int count=0;
		for(i=2;i<=n;i++) {
			if(n%i==0) {
				count++;
			}
		}
		if(count==1) {
			printf("Prime");
		} else {
			printf("Not prime");
		}
	}
}