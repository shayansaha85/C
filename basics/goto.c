#include<stdio.h>
#include<stdlib.h>
int main() {
    int i=0;
    menu:
    printf("%d\n",i);
    i++;
    if(i==5) {
        exit(0);
    }
    goto menu;
}