#include<stdio.h>
int change(int n) {
    printf("Before adding 10 with it = %d\n",n);
    n=n+10;
    printf("After adding 10 with it = %d\n",n);
}
int main() {
    int n=20;
    printf("Before calling function = %d\n",n);
    change(n);
    printf("After calling function = %d\n",n);
}