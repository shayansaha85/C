#include<stdio.h>
int main() {
	int no_of_elements;
	printf("How many elements do you want to enter? = ");
	scanf("%d",&no_of_elements);
	int arr[no_of_elements];
	for(int i=0;i<no_of_elements;i++) {
		printf("Element #%d = ",(i+1));
		scanf("%d",&arr[i]);
	}
	printf("\nYou have entered\n");
	for(int i=0;i<no_of_elements;i++) {
		printf("%d\n",arr[i]);
	}
	
}