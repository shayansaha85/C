#include<stdio.h>
int main() {
	FILE *file;
	file = fopen("./sample6.txt","r");
	char ch;
	while((ch=fgetc(file))!=EOF) {
		printf("%c",ch);
	}

	rewind(file);

	while((ch=fgetc(file))!=EOF) {
		printf("%c",ch);
	}

	fclose(file);
}