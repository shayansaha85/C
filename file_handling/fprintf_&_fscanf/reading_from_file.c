#include<stdio.h>
int main() {
	FILE *f;
	char ch[300];
	f = fopen("./sample1.txt","r");
	while(fscanf(f,"%s",ch)!=EOF) {
		printf("%s",ch);
	}
	fclose(f);
}