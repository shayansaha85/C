#include<stdio.h>
int main(int argc, char *argv[]) {
	printf("Filename = %s\n",argv[0]);
	if(argc<2) {
		printf("No arguments\n");
	} else {
		printf("Command passed = %s\n",argv[1]);
	}
}