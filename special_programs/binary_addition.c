#include<stdio.h>
#include<math.h>
int toBinary(int n) {
	int r,b=0,i=1;
	while(n!=0) {
		r=n%2;
		b=b+r*i;
		i=i*10;
		n=n/2;
	}
	return b;
}
int toDecimal(int b) {
	int r,d=0,i=0;
	while(b!=0) {
		r=b%10;
		d=d+r*pow(2,i);
		i++;
		b=b/10;
	}
	return d;
}
int main() {
	int b1,b2;
	printf("Enter first binary number = ");
	scanf("%d",&b1);
	printf("Enter second binary number = ");
	scanf("%d",&b2);
	int d1=toDecimal(b1);
	int d2=toDecimal(b2);
	int ans_in_dec=d1+d2;
	int ans_in_bin=toBinary(ans_in_dec);
	printf("%d + %d = %d",b1,b2,ans_in_bin);
}