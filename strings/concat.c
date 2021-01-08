#include<stdio.h>
#include<string.h>
int main() {
	char fname[100] = {'S','h','a','y','a','n',' ','\0'};
	char lname[100] = {'S','a','h','a'};
	strcat(fname,lname);
	printf("%s",fname);
}