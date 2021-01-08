#include "external_var.h" //Calling the external variable
#include<stdio.h>
int c=30; //Global variable
int main() {
    int a=10; //Local variable
    static int b=20; //Static variable
    auto int d=40; //Automatic variable
    const int k=90; //Constant variable
    printf("%d is an external variable",e);
}