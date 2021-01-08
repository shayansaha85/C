#include<stdio.h>
#include<math.h>
int main() {
	int number;
	int power;
	printf("Enter number and base :\n");
	scanf("%d %d",&number,&power);
	printf("Ans = %f",pow(number,power));
}