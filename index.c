#include<stdio.h>

int main() {
    int a;
    printf("enter age:");
    scanf("%d",a);

    a >= 18 ? printf("Adult") : printf("Not adult");

    return 0;
}