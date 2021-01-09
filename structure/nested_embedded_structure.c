#include<stdio.h>
#include<string.h>
struct employee {
	int id;
	char name[100];
	struct dateofjoining {
		int dd;
		int mm;
		int yyyy;
	}doj;
}emp;

int main() {
	emp.id-575;
	strcpy(emp.name,"Shayan Saha");
	emp.doj.dd = 25;
	emp.doj.mm = 9;
	emp.doj.yyyy = 2020;
	printf("\nDETAILS\n");
	printf("ID = %d\n",emp.id);
	printf("Name = %s\n",emp.name);
	printf("Date of joining = %d/%d/%d",emp.doj.dd,emp.doj.mm,emp.doj.yyyy);
}