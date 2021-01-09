#include<stdio.h>
int main() {
	FILE *file;
	char txt[200]="Hello how are you?";
	file = fopen("./sample4.txt","w+");
	fputs(txt,file);
	printf("File written successfully");
	fclose(file);
}