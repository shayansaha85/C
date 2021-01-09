#include<stdio.h>
#include<string.h>
struct employee {
	int id;
	char name[100];
}e1,e2;
int main() {
	e1.id = 1;
	e2.id = 2;
	strcpy(e1.name,"Shayan Saha");
	strcpy(e2.name,"Tanmoy Debnath");
	printf("EMPLOYEE DETAILS\n");
	printf("%d. %s\n",e1.id,e1.name);
	printf("%d. %s\n",e2.id,e2.name);
}