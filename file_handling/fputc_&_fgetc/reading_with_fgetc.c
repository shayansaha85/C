#include<stdio.h>
int main() {
	FILE *file;
	char ch;
	file = fopen("./sample3.txt","r");
	while((ch=fgetc(file))!=EOF) {
		printf("%c",ch);
	}
	fclose(file);
}