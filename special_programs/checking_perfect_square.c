#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int ans = sqrt(n);
	float ans_float = sqrt(n);
	float ans_int_to_float = (float)ans;
	if(ans_float==ans_int_to_float) {
		printf("Perfect square");
	} else {
		printf("Not perfect square");
	}
}