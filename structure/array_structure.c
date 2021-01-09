#include<stdio.h>
#include<string.h>
struct student_list {
	int rollno;
	char name[100];
};

int main() {
	struct student_list s[5];
	printf("Enter details\n");
	int i=0;
	while(i<5) {
		printf("Student #%d\n",(i+1));
		printf("Roll No. = ");
		scanf("%d",&s[i].rollno);
		printf("Name = ");
		scanf("%s",&s[i].name);
		i++;
	}
	printf("%s",s[4].name);
	for(int j=0;j<5;j++) {
		printf("Roll No = %d\n=Name = %s\n",s[i].rollno,s[i].name);
	}
}