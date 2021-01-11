#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Enter an integer = ");
	scanf("%d",&n);
	int temp1=n,temp2=n;
	int r,res=0;
	int digits=0;
	while(temp1!=0) {
		digits++;
		temp1/=10;
	}
	while(temp2!=0) {
		r=temp2%10;
		res=res+pow(r,digits);
		temp2/=10;
	}
	if(n==res) {
		printf("Armstrong");
	} else {
		printf("Not Armstrong");
	}
}