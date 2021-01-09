#include<stdio.h>
#include<string.h>
struct lastname {
	char name[100];
};
struct fullname {
	char name[100];
	struct lastname lname;
};

int main() {
	struct fullname name;
	printf("Enter firstname = ");
	scanf("%s",&name.name);
	printf("Enter lastname = ");
	scanf("%s",&name.lname.name);
	printf("\nFull name = %s %s",name.name,name.lname.name);
}