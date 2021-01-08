#include<stdio.h>
int change(int *n) {
	printf("Before adding 10 with it = %d\n",*n);
	(*n)=(*n)+10;
	printf("After adding 10 with it = %d\n",*n);
}
int main() {
	int x=20;
	printf("Before function call = %d\n",x);
	change(&x);
	printf("After function call = %d\n",x);
}