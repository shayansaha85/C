#include<stdio.h>
int main() {
	FILE *f;
	char c;
	f = fopen("./file_handling.c","r");
	while(1) {
		c = fgetc(f);
		if(c==EOF) {
			break;
		}
		printf("%c",c);
	}
	fclose(f);
}