#include<stdio.h>
int *arrayfun(int *a) {
	printf("Enter the array elements\n");
	for(int i=0;i<5;i++) {
		printf("Element #%d = ",i+1);
		scanf("%d",&a[i]);
	}
	return a;
}
int main() {
	int *arr;
	int a[5];
	arr=arrayfun(a);
	for(int i=0;i<5;i++) {
		printf("%d\n",arr[i]);
	}
	
}