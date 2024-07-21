#include<stdio.h>
int main(){
    int a,b;

    printf("Enter angle a::");
    scanf("%d",&a);
    printf("Enter angle b::");
    scanf("%d",&b);

    printf("%d",180-(a+b));
}