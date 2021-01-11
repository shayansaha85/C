#include<stdio.h>
int main() {
	int a,b,c;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	asm {
		mov ax,a
		mov bx,b
		add ax,bx
		mov c,ax
	}
	printf("%d+%d = %d",a,b,c);
}

// it will run in turboc only