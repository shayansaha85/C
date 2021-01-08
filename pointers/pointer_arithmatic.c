#include<stdio.h>
int main() {
	int a=20;
	int *p;
	p=&a;
	printf("Address before adding = %u\n",p);
	p++;
	printf("Address after adding 1 with it = %u\n",p);
}