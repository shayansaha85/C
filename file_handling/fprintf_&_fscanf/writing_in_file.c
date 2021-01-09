#include<stdio.h>
int main() {
	FILE *f;
	f = fopen("./sample1.txt","w");
	fprintf(f,"Shayan");
	fclose(f);
}