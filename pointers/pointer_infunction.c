#include<stdio.h>
#include<stdlib.h>
int add(int a,int b) {
	return (a+b);
}
int main() {
	int a,b;
	int (*p)(int,int);
	printf("Enter the value of a and b seperated by space : ");
	scanf("%d %d",&a,&b);
	p=add;
	int result=(*p)(a,b);
	printf("\n%d+%d=%d",a,b,result);
}