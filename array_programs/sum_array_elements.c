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
	int sum=0;
	for(int i=0;i<n;i++) {
		sum=sum+arr[i];
	}
	printf("\nSum = %d",sum);
}