#include<stdio.h>
#define N 2
int main() {
	#if (N==0)
	printf("Wrong",N);
	#else
	printf("Right");
	#endif
	printf("\nEnd of program");
}