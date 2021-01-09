#include<stdio.h>
int main() {
	FILE *file;
	file = fopen("./sample7.txt","r");
	fseek(file,0,SEEK_END);
	int size = ftell(file);
	printf("Size = %d bytes",size);
	fclose(file);
}