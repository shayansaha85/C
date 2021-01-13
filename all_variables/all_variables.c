#include<stdio.h>
int c=30; //Global variable
int main() {
    int a=10; //Local variable
    static int b=20; //Static variable
    auto int c=40; //Automatic variable
    const int d=90; //Constant variable
    printf("Local variable = %d\n",a);
    printf("Static variable = %d\n",b);
    printf("Automatic variable = %d\n",c);
    printf("Constant variable = %d\n",d);
}