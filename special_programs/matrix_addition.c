#include<stdio.h>
void main() {
	int arr[50][50];
	int arr1[50][50];
	int row,col;
	printf("\nRow = ");
	scanf("%d",&row);
	printf("\nColumn = ");
	scanf("%d",&col);
	int i,j;
	printf("\n");
	printf("Enter matrix 1");
	printf("\n======================\n");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEnter matrix 2");
	printf("\n======================\n");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nResult");
	printf("\n======================\n");
	int ans[50][50];
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			ans[i][j] = arr[i][j]+arr1[i][j];
		}
	}
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			printf("%d\t",ans[i][j]);
			if(j==col-1) {
				printf("\n");
			}
		}
	}
}