#include<stdio.h>
#include<string.h>
int main() {
	char ch[] = "Hello World";
	int i=0;
	int n=strlen(ch);
	int count=0;
	while(i<n) {
		if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||
		   ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U') {
			count++;
		}
		i++;
	}
	printf("Number of vowels = %d\n",count);
}