#include<stdio.h>
#include<string.h>
struct employee {
	int id;
	char firstname[100];
	char lastname[100];
	float salary;
}emp;
int main() {
	FILE *file;
	file = fopen("./employee_details.txt","w+");
	printf("Enter ID = ");
	scanf("%d",&emp.id);
	printf("Enter firstname = ");
	scanf("%s",&emp.firstname);
	printf("Enter lastname = ");
	scanf("%s",&emp.lastname);
	printf("Enter salary = ");
	scanf("%f",&emp.salary);
	fprintf(file,"Employee details\n----------------\n");
	fprintf(file,"ID = %d\n",emp.id);
	fprintf(file,"Name = %s %s\n",emp.firstname,emp.lastname);
	fprintf(file,"Salary = %.2f\n",emp.salary);
	fclose(file);
	printf("Details saved in the employee_details.txt file successfully");
}