#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = (int *)malloc(sizeof(int));
	int a=6;
	ptr=&a;
	free(ptr);
	printf("%x",ptr); //will not give any value as it is freed from the memory
}