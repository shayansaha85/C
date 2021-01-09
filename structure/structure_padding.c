#include<stdio.h>
struct employee {
	int id;
	char name;
}emp;
int main() {
	printf("Size of structure = %d bytes",sizeof(emp));
}