#include<stdio.h>
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	int bin=0,r,i=1;
	while(n!=0) {
		r=n%2;
		bin=bin+r*i;
		i=i*10;
		n=n/2;
	}
	printf("Binary equivalent = %d",bin);
}