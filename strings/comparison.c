#include<stdio.h>
#include<string.h>
int main() {
	char str1[100] = "Shayan";
	char str2[100] = "Shayan";
	if(strcmp(str1,str2)==0) {
		printf("Two strings are same");
	} else {
		printf("Two strings are different");
	}

}