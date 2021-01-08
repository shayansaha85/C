#include<stdio.h>
int main() {
	int mat[50][50];
	int row,col;
	printf("Row = ");
	scanf("%d",&row);
	printf("Column = ");
	scanf("%d",&col);
	int i,j;
	int det;
	if(row==col) {
		printf("Enter the determinant/matrix below : ");
		printf("\n==============================================\n");
		for(i=0;i<row;i++) {
			for(j=0;j<col;j++) {
				scanf("%d",&mat[i][j]);
			}
		}
	if(row==2 && col==2) {
			det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
		}
	else if(row==3 && col==3) {
			det = mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])-mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0])
				  +mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);	
		}
		printf("\n| mat | = %d",det);
	}
	else {
		printf("Determinant cannot be calculated");
	}
}