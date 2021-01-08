#include<stdio.h>
int array_function(int arr[]) {
	for(int i=0;i<6;i++) {
		printf("%d\n",arr[i]);
	}
}
int main() {
	int arr[6] = {3,45,2,1,4,5};
	array_function(arr);
}