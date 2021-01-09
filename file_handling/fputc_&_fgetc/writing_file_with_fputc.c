#include<stdio.h>
int main() {
	FILE *file;
	file = fopen("./sample2.txt","w+");
	char ch;
	printf("Enter a character = ");
	scanf("%c",&ch);
	fputc(ch,file);
	printf("'%c' written to the sample2.txt file successfully\n",ch);
	fclose(file);
}