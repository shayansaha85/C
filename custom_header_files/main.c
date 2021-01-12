#include "calculator.h"
#include<stdio.h>
int main() {
	int a=23;
	int b=7;
	int addition_ans = add(a,b);
	int subtraction_ans = subtract(a,b);
	int multiplication_ans = multiply(a,b);
	float division_ans = divide(a,b);
	printf("Addition = %d\n",addition_ans);
	printf("Subtraction = %d\n",subtraction_ans);
	printf("Multiplication = %d\n",multiplication_ans);
	printf("Division = %f\n",division_ans);
}