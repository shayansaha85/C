#include<stdio.h>
int main() {
	int arr[3][4] = {{3,6,5,9},{1,5,2,3},{5,8,3,2}};
	for(int i=0;i<3;i++) {
		for(int j=0;j<4;j++) {
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}
}