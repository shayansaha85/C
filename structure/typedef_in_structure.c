#include<stdio.h>
#include<string.h>
struct employee {
	int empid;
	char empname[100];
	double empsal;
};
int main() {
	typedef struct employee Emp;
	Emp e1;
	printf("Enter employee ID = ");
	scanf("%d",&e1.empid);
	printf("Enter employee name = ");
	scanf("%s",&e1.empname);
	printf("Enter employee salary = ");
	scanf("%.2lf",&e1.empsal);
	printf("\nEmployee details:\n");
	printf("ID = %d\n",e1.empid);
	printf("Name = %s\n",e1.empname);
	printf("Salary = %lf\n",e1.empsal);
}