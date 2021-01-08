#include<stdio.h>
int main() {
	int n;
	printf("How many elements do you want to enter? = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		printf("Element #%d = ",i+1);
		scanf("%d",&arr[i]);
	}
	int temp;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSorted array\n");
	for(int i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}
}