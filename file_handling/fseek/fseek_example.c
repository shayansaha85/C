#include<stdio.h>
int main() {
	FILE *f;
	f=fopen("./sample5.txt","w+");
	fputs("Hello Shayan",f);
	fseek(f,6,SEEK_SET);
	fputs("Irin Banik",f);
	fclose(f);
}