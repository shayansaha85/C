#include<stdio.h>
#include<string.h>
union employee {
	int id;
	char name[100];
}emp;
int main() {
	emp.id = 1;
	strcpy(emp.name,"Shayan");
	printf("ID = %d\nName = %s",emp.id,emp.name);
}