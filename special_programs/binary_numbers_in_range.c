#include<stdio.h>
int toBinary(int n) {
	int r,b=0,i=1;
	while(n!=0) {
		r=n%2;
		b=b+r*i;
		i=i*10;
		n=n/2;
	}
	return b;
}
int main() {
	int start,end;
	printf("Enter START_POINT = ");
	scanf("%d",&start);
	printf("Enter END_POINT = ");
	scanf("%d",&end);
	for(int i=start;i<=end;i++) {
		printf("%d\t=\t%d\n",i,toBinary(i));
	}

}