#include<stdio.h>
int main() {
	int arr[3][3];
	printf("Enter the elements of the matrix below\n");
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix form\n");
	for(int i=0;i<3;i++) {
		printf("\n");
		for(int j=0;j<3;j++) {
			printf("%d\t",arr[i][j]);
		}
	}
}