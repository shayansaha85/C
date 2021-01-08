#include<stdio.h>
int main() {
	int a=10;
	int *p;
	int **w;
	p=&a;
	w=&p;
	printf("%x\n",p);
	printf("%d\n",*p);
	printf("%d\n",**w); //will return its value
}