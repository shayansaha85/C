#include<stdio.h>
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	int r,sum=0;
	while(n!=0) {
		r=n%10;
		sum+=r;
		n/=10;
	}
	printf("Sum of digits = %d",sum);
}