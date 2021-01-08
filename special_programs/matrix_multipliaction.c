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
	int ans[50][50],k;
	system("cls");
	printf("\nResult");
	printf("\n===========================\n");
	for(i=0;i<row;i++) {    
		for(j=0;j<col;j++) {    
			ans[i][j]=0;    
		for(k=0;k<col;k++) {    
			ans[i][j]+=arr[i][k]*arr1[k][j];    
			}    
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