#include<stdio.h>
int main() {
	int var=23;
	int *p;
	p=&var;
	printf("Address = %x\n",p);
	printf("Value = %d",*p);
}