#include<stdio.h>
int main() {
    char ch;
    int age;
    printf("Are you an Indian? (y/n) = ");
    scanf("%c",&ch);
    if(ch=='y' || ch=='Y'){
        printf("Enter age = ");
        scanf("%d",&age);
        if(age>=18) {
            printf("Eligible for vote");
        } else {
            printf("Not eligible for vote");
        }
    } else {
        printf("Not eligible for vote");
    }
}