#include<stdio.h>
int main() {
	int age;
	printf("Enter age = ");
	scanf("%d",&age);
	char ans;
	ans = (age>18) ? 'Y' : 'N';
	if(ans=='Y') {
		printf("Ready for marriage\n");
	} else {
		printf("Not ready for marriage\n");
	}
}