#include<stdio.h>
int main() {
	int n1=0,n2=1;
	int n3;
	int el;
	printf("Enter number of elements = ");
	scanf("%d",&el);
	printf("%d  %d  ",n1,n2);
	for(int i=2;i<el;i++) {
		n3=n1+n2;
		printf("%d  ",n3);
		n1=n2;
		n2=n3;
	}
}