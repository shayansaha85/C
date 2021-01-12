#include<stdio.h>
#include<math.h>
int main() {
	int bin;
	printf("Enter a binary number = ");
	scanf("%d",&bin);
	int r,i=0,dec=0;
	while(bin!=0) {
		r=bin%10;
		dec=dec+r*pow(2,i);
		i++;
		bin/=10;
	}
	printf("Decimal equivalent = %d",dec);
}