#include<stdio.h>
#include<stdlib.h>
int main() {
	int n,i,sum=0;
	int *p;
	printf("No. of elements = ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL) {
		printf("Unable to allocate memory");
		exit(0);
	}
	printf("\nEnter %d elements below:\n",n);
	for(i=0;i<n;i++) {
		printf("Element #%d = ",(i+1));
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	printf("\nSum of the entered elements is = %d\n",sum);
	free(p);
}