#include<stdio.h>
int main() {
	FILE *file;
	char txt[200];
	file = fopen("./sample4.txt","r");
	printf("%s",fgets(txt,200,file));
	fclose(file);
}