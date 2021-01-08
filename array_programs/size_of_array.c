#include<stdio.h>
int main() {
	int arr[5] = {5,6,9,8,2};
	size_t size = sizeof(arr)/sizeof(arr[0]);
	printf("Array size = %d",size);
}