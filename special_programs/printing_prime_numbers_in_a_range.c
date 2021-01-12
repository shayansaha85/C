#include<stdio.h>
int primeChecker(int n) {
	int c=0,i;
	for(i=2;i<=n;i++) {
		if(n%i==0) {
			c++;
		}
	}
	return c;
}
int main() {
	int start,end;
	printf("Enter the START_POINT = ");
	scanf("%d",&start);
	printf("Enter the END_POINT = ");
	scanf("%d",&end);
	for(int i=start;i<=end;i++) {
		if(i==1||i==0) {
			printf("%d is neither prime nor composite\n",i);
		} else {
			if(primeChecker(i)==1) {
				printf("%d is prime\n",i);
			} else {
				printf("%d is composite\n",i);
			}
		}
	}
}