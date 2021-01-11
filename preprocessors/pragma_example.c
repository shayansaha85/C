#include<stdio.h>
int add(int n,int m);

#pragma startup add
#pragma exit add

int main() {
	int n=2,m=3;
	printf("%d and %d are not added\n",n,m);
}

int add(int n,int m) {
	printf("Added = %d\n",(n+m));
}

// it will run in turboc only