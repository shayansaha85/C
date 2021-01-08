#include<stdio.h>
int main() {
    int a=2;
    char c='b';
    float d=2.365236;
    double e=2.36522;
    printf("Size of integer = %d bytes\n",sizeof(a));
    printf("Size of character = %d bytes\n",sizeof(c));
    printf("Size of float = %d bytes\n",sizeof(d));
    printf("Size of douoble = %d bytes\n",sizeof(e));
}