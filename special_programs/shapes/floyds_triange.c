#include<stdio.h>
int main() {
	int row,i,j,number=1;
	printf("Enter row = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++) {
		for(j=1;j<=i;j++) {
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
}